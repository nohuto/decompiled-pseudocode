/*
 * XREFs of ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140148DBC
 * Callers:
 *     SmFirstTimeInit @ 0x1403E4E40 (SmFirstTimeInit.c)
 * Callees:
 *     SmFpPreAllocate @ 0x140148E48 (SmFpPreAllocate.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStorePrepare(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  __int64 result; // rax
  unsigned int i; // ecx
  int *v6; // rax
  int *v7; // rdx
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]
  int v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+3Ch] [rbp+14h]
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v10 = 1048832;
  v2 = 21;
  v8 = 1049217;
  v11 = 1049217;
  v3 = *(_DWORD *)(a1 + 1664);
  if ( (v3 & 2) != 0 )
    v2 = 1048597;
  v9 = v2;
  if ( (v3 & 1) == 0 )
  {
    for ( i = 0; i < 2; ++i )
    {
      if ( i )
      {
        v6 = &v10;
        v7 = (int *)&v12;
      }
      else
      {
        v6 = &v8;
        v7 = &v10;
      }
      do
        *v6++ &= 0xF00FFFFF;
      while ( v6 < v7 );
    }
  }
  result = SmFpPreAllocate((PEX_SPIN_LOCK)(a1 + 1376));
  if ( (int)result >= 0 )
  {
    result = SmFpPreAllocate((PEX_SPIN_LOCK)(a1 + 1264));
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
