/*
 * XREFs of HmgPrefetchAllObjt @ 0x1C000FA50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall HmgPrefetchAllObjt(char a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  __int64 result; // rax
  unsigned int v7; // edx
  __int64 v8; // rcx
  _QWORD v9[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+38h] [rbp-D0h]
  __int64 *v11; // [rsp+40h] [rbp-C8h]
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v13[31]; // [rsp+50h] [rbp-B8h] BYREF

  v4 = 0;
  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  v10 = 0LL;
  v5 = 1;
  result = (__int64)&v12;
  v7 = gcMaxHmgr;
  v11 = &v12;
  v9[0] = 1LL;
  v9[1] = -3LL;
  if ( (unsigned int)gcMaxHmgr > 1 )
  {
    do
    {
      result = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
      if ( *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * v5 + 14) == a1 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * v5);
        if ( v8 )
        {
          result = 2LL * v4++;
          v13[result - 1] = v8;
          v13[result] = a2;
        }
      }
      if ( v4 == 16 )
      {
        v10 = 16LL;
        result = MmPrefetchVirtualAddresses(v9);
        v7 = gcMaxHmgr;
        v4 = 0;
      }
      ++v5;
    }
    while ( v5 < v7 );
    if ( v4 )
    {
      v10 = v4;
      return MmPrefetchVirtualAddresses(v9);
    }
  }
  return result;
}
