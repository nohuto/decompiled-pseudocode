/*
 * XREFs of ?RmpActivityHostQueryOfferedMemoryDxgCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180009050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostQueryOfferedMemoryDxgCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h]
  __int64 v9; // [rsp+58h] [rbp+10h]

  v7[1] = a2;
  v7[0] = 32LL;
  v7[2] = 0LL;
  v8 = 0LL;
  result = D3DKMTQueryProcessOfferInfo(v7);
  if ( (int)result < 0 )
  {
    v6 = v9;
  }
  else
  {
    v6 = v8;
    result = 0LL;
  }
  if ( (int)result >= 0 )
  {
    *a4 += v6;
    return 0LL;
  }
  return result;
}
