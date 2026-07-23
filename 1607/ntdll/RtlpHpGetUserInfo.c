/*
 * XREFs of RtlpHpGetUserInfo @ 0x18007AE80
 * Callers:
 *     RtlGetUserInfoHeap @ 0x18007AB40 (RtlGetUserInfoHeap.c)
 * Callees:
 *     RtlpHpExtrasGet @ 0x18002925C (RtlpHpExtrasGet.c)
 */

__int64 __fastcall RtlpHpGetUserInfo(__int64 a1, unsigned __int64 a2, unsigned int a3, _QWORD *a4, _DWORD *a5)
{
  unsigned __int64 v6; // rax

  v6 = RtlpHpExtrasGet(a1, a2, *(_DWORD *)(a1 + 20) | a3, 0LL);
  if ( a4 && v6 )
    *a4 = *(_QWORD *)(v6 + 8);
  if ( a5 )
  {
    if ( v6 )
      *a5 = *(unsigned __int8 *)(v6 + 2) >> 4 << 8;
    else
      *a5 = 0;
  }
  return 1LL;
}
