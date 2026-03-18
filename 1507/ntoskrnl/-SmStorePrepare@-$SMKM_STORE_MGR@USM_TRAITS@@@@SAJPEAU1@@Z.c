/*
 * XREFs of ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140170D7C
 * Callers:
 *     SmFirstTimeInit @ 0x1404F9AFC (SmFirstTimeInit.c)
 * Callees:
 *     SmFpPreAllocate @ 0x140170E0C (SmFpPreAllocate.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStorePrepare(__int64 a1)
{
  int v1; // r8d
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

  v1 = *(_DWORD *)(a1 + 10096);
  v8 = 1049217;
  v11 = 1049217;
  v10 = 1048832;
  v3 = 20;
  if ( (v1 & 2) != 0 )
    v3 = 1048596;
  v9 = v3;
  if ( (v1 & 1) == 0 )
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
  result = SmFpPreAllocate(a1 + 9816, &v8, 2LL);
  if ( (int)result >= 0 )
  {
    result = SmFpPreAllocate(a1 + 9712, &v10, 2LL);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
