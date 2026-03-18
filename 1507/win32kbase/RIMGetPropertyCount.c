/*
 * XREFs of RIMGetPropertyCount @ 0x1C0073DEC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0073F6C (RIMCreatePointerDeviceInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1C0074AFC (RIMRetrieveLinkCollection.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C51A8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0074F80 (rimHidP_GetSpecificValueCaps.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

__int64 __fastcall RIMGetPropertyCount(__int64 a1, unsigned __int16 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  unsigned __int16 v7; // r14
  int SpecificValueCaps; // esi
  int v10; // r15d
  unsigned __int16 v11; // r12
  unsigned __int16 v12; // ax
  __int64 v13; // rdi
  _BYTE *v14; // rax
  __int64 v15; // rdx
  __int64 v17; // rax
  unsigned __int16 v18; // dx
  unsigned __int16 v19; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v20[2]; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int16 v21; // [rsp+4Ch] [rbp-6Dh] BYREF
  __int16 v22[2]; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int16 v23; // [rsp+54h] [rbp-65h]
  int v24; // [rsp+58h] [rbp-61h]
  __int64 v25; // [rsp+60h] [rbp-59h]
  char v26[2]; // [rsp+70h] [rbp-49h] BYREF
  char v27; // [rsp+72h] [rbp-47h]

  v4 = *(_QWORD *)(a1 + 696);
  v5 = 0;
  v23 = a2;
  v25 = a1;
  v7 = a3;
  v19 = a3;
  v20[0] = a3;
  v22[0] = 1;
  SpecificValueCaps = -1073741668;
  v21 = 0;
  v10 = 0;
  v24 = 0;
  v11 = a2;
  if ( v4 )
  {
    v12 = *(_WORD *)(v4 + 14);
    if ( v12 )
    {
      v11 = v12;
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v12, 0, 0LL, (__int64)&v21, a4);
      if ( SpecificValueCaps == -1072627705 )
      {
        v17 = *(_QWORD *)(a1 + 696);
        v20[0] = v21;
        v7 = v21 + v19;
        *(_WORD *)(v17 + 44) = v21;
        v24 = 1;
      }
      else
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x18u,
          (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids);
      }
    }
  }
  if ( v7 > 1u )
  {
    v13 = Win32AllocPool();
    if ( v13 )
    {
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 1, v11, 48, (__int64)v26, (__int64)v22, a4);
      if ( SpecificValueCaps >= 0 )
      {
        *(_BYTE *)(v25 + 1408) = v27;
        SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v11, 0, v13, (__int64)v20, a4);
        if ( SpecificValueCaps >= 0 )
        {
          if ( v20[0] )
          {
            v14 = (_BYTE *)(v13 + 2);
            v15 = v20[0];
            do
            {
              if ( *v14 == v27 )
                ++v10;
              v14 += 72;
              --v15;
            }
            while ( v15 );
          }
          if ( v24 )
          {
            SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v23, 0, v13 + 72LL * v20[0], (__int64)&v19, a4);
            if ( SpecificValueCaps >= 0 )
            {
              v18 = v20[0];
              if ( v19 )
              {
                do
                {
                  if ( v18 >= v7 )
                    break;
                  if ( *(_BYTE *)(v13 + 72LL * v18 + 2) == v27 )
                    ++v10;
                  ++v18;
                }
                while ( (unsigned __int16)(v18 - v20[0]) < v19 );
              }
            }
          }
          *(_DWORD *)(v25 + 300) = v10;
        }
      }
      Win32FreePool();
    }
  }
  LOBYTE(v5) = SpecificValueCaps >= 0;
  return v5;
}
