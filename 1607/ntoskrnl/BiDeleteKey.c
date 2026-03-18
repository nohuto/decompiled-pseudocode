/*
 * XREFs of BiDeleteKey @ 0x140532A4C
 * Callers:
 *     BiDeleteKey @ 0x140532A4C (BiDeleteKey.c)
 *     BcdDeleteElement @ 0x14053D21C (BcdDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14053DADC (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x1406D2034 (BcdDeleteObject.c)
 * Callees:
 *     BiZwDeleteKey @ 0x140124DA0 (BiZwDeleteKey.c)
 *     BiSanitizeHandle @ 0x140124DA8 (BiSanitizeHandle.c)
 *     BiZwClose @ 0x14012E078 (BiZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BiDeleteKey @ 0x140532A4C (BiDeleteKey.c)
 *     BiEnumerateSubKeys @ 0x14053C2A0 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x14053DE4C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053DFCC (BiCloseKey.c)
 */

__int64 __fastcall BiDeleteKey(__int64 a1)
{
  unsigned __int64 v1; // rax
  void *v2; // rsi
  NTSTATUS v3; // ebx
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  v1 = BiSanitizeHandle(a1);
  P = 0LL;
  v2 = (void *)v1;
  if ( (int)BiEnumerateSubKeys(v1, &P, &Handle) >= 0 && (_DWORD)Handle )
  {
    v5 = P;
    v6 = (unsigned int)Handle;
    do
    {
      if ( (int)BiOpenKey(v2, *v5, 983103LL, &Handle) >= 0 && (int)BiDeleteKey(Handle) < 0 )
        BiCloseKey(Handle);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  v3 = BiZwDeleteKey(v2);
  if ( v3 >= 0 )
    BiZwClose(v2);
  return (unsigned int)v3;
}
