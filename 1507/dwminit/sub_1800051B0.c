/*
 * XREFs of sub_1800051B0 @ 0x1800051B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003B24 @ 0x180003B24 (sub_180003B24.c)
 *     sub_1800040A8 @ 0x1800040A8 (sub_1800040A8.c)
 *     sub_180004E08 @ 0x180004E08 (sub_180004E08.c)
 *     memcpy @ 0x1800075FA (memcpy.c)
 */

__int64 __fastcall sub_1800051B0(__int64 a1, ULONG a2, const void *a3, __int16 a4, void *a5, __int16 a6, ULONG *a7)
{
  __int16 v7; // ax
  unsigned int v8; // ebx
  unsigned __int16 v12; // ax
  struct _PORT_MESSAGE *v14; // rax
  struct _PORT_MESSAGE *v15; // rdi
  NTSTATUS v16; // eax
  int v17; // eax

  v7 = a6;
  v8 = 0;
  if ( a4 > a6 )
    v7 = a4;
  v12 = v7 + 48;
  if ( v12 < 0x2B0u )
    v12 = 688;
  v14 = (struct _PORT_MESSAGE *)HeapAlloc(*(HANDLE *)(a1 + 80), 8u, v12);
  v15 = v14;
  if ( v14 )
  {
    v14[1].u1.Length = a2;
    v14->u1.s1.DataLength = a4 + 8;
    v14->u1.s1.TotalLength = a4 + 48;
    if ( (__int16)(a4 + 48) > 512 )
      sub_1800040A8(
        0LL,
        L"pMsg->u1.s1.TotalLength <= 512",
        L"LpcVerifyOutgoingPayloadSize",
        L"windows\\dwm\\common\\shared\\lpcshared.h",
        310);
    memcpy(&v15[1].DoNotUseThisField, a3, a4);
    v16 = NtRequestWaitReplyPort(*(HANDLE *)(a1 + 48), v15, v15);
    v17 = sub_180004E08(a1, v16);
    if ( v17 >= 0 )
    {
      if ( (v15[1].u2.ZeroInit & 0x80000000) == 0 && a5 && a6 )
      {
        if ( v15->u1.s1.DataLength == a6 + 8 )
        {
          memcpy(a5, &v15[1].DoNotUseThisField, a6);
        }
        else
        {
          v8 = -2147024872;
          sub_180003B24(1u, (__int64)&unk_180009390, 8LL, 0x80070018, 186);
        }
      }
      *a7 = v15[1].u2.ZeroInit;
    }
    else
    {
      v8 = v17 | 0x10000000;
      sub_180003B24(1u, (__int64)&unk_180009390, 8LL, v17 | 0x10000000, 178);
    }
    HeapFree(*(HANDLE *)(a1 + 80), 0, v15);
  }
  else
  {
    v8 = -2147024882;
    sub_180003B24(1u, (__int64)&unk_180009390, 8LL, 0x8007000E, 168);
  }
  return v8;
}
