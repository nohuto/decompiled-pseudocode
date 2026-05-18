/*
 * XREFs of sub_180005050 @ 0x180005050
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003B24 @ 0x180003B24 (sub_180003B24.c)
 *     sub_1800040A8 @ 0x1800040A8 (sub_1800040A8.c)
 *     sub_180004E08 @ 0x180004E08 (sub_180004E08.c)
 *     memcpy @ 0x1800075FA (memcpy.c)
 */

__int64 __fastcall sub_180005050(__int64 a1, ULONG a2, const void *a3, __int16 a4)
{
  unsigned int v4; // ebx
  UINT v9; // r9d
  struct _PORT_MESSAGE *v10; // rax
  struct _PORT_MESSAGE *v11; // rsi
  NTSTATUS v12; // eax
  int v13; // eax
  int v15; // [rsp+20h] [rbp-28h]

  v4 = 0;
  if ( !a3 )
  {
    v9 = -2147024890;
    v15 = 92;
LABEL_3:
    v4 = v9;
    sub_180003B24(1u, (__int64)&unk_180009390, 8LL, v9, v15);
    return v4;
  }
  v10 = (struct _PORT_MESSAGE *)HeapAlloc(*(HANDLE *)(a1 + 80), 8u, (unsigned __int16)(a4 + 48));
  v11 = v10;
  if ( !v10 )
  {
    v9 = -2147024882;
    v15 = 95;
    goto LABEL_3;
  }
  v10[1].u1.Length = a2;
  v10->u1.s1.DataLength = a4 + 8;
  v10->u1.s1.TotalLength = a4 + 48;
  if ( (__int16)(a4 + 48) > 512 )
    sub_1800040A8(
      0LL,
      L"pMsg->u1.s1.TotalLength <= 512",
      L"LpcVerifyOutgoingPayloadSize",
      L"windows\\dwm\\common\\shared\\lpcshared.h",
      310);
  memcpy(&v11[1].DoNotUseThisField, a3, a4);
  v12 = NtRequestPort(*(HANDLE *)(a1 + 48), v11);
  v13 = sub_180004E08(a1, v12);
  if ( v13 < 0 )
  {
    v4 = v13 | 0x10000000;
    sub_180003B24(1u, (__int64)&unk_180009390, 8LL, v13 | 0x10000000, 105);
  }
  HeapFree(*(HANDLE *)(a1 + 80), 0, v11);
  return v4;
}
