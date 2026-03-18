/*
 * XREFs of BiDeleteKey @ 0x140569810
 * Callers:
 *     BiDeleteKey @ 0x140569810 (BiDeleteKey.c)
 *     BcdDeleteElement @ 0x14056F1C8 (BcdDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14056FB78 (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x14070D304 (BcdDeleteObject.c)
 * Callees:
 *     BiZwDeleteKey @ 0x14014C564 (BiZwDeleteKey.c)
 *     BiZwClose @ 0x14014FE44 (BiZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     BiDeleteKey @ 0x140569810 (BiDeleteKey.c)
 *     BiEnumerateSubKeys @ 0x14056DFB8 (BiEnumerateSubKeys.c)
 *     BiCloseKey @ 0x14056FD14 (BiCloseKey.c)
 *     BiOpenKey @ 0x140570094 (BiOpenKey.c)
 */

__int64 __fastcall BiDeleteKey(HANDLE Handle)
{
  int v2; // eax
  PVOID v3; // rbx
  NTSTATUS v4; // ebx
  _QWORD *v6; // rsi
  __int64 v7; // rbp
  HANDLE Handlea; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  P = 0LL;
  v2 = BiEnumerateSubKeys(Handle, &P, &Handlea);
  v3 = P;
  if ( v2 >= 0 && (_DWORD)Handlea )
  {
    v6 = P;
    v7 = (unsigned int)Handlea;
    do
    {
      if ( (int)BiOpenKey(Handle, *v6, 983103LL, &Handlea) >= 0 && (int)BiDeleteKey(Handlea) < 0 )
        BiCloseKey(Handlea);
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = BiZwDeleteKey(Handle);
  if ( v4 >= 0 )
    BiZwClose(Handle);
  return (unsigned int)v4;
}
