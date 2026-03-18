/*
 * XREFs of RIMGetPropertyCount @ 0x1C0007AD8
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0007C58 (RIMCreatePointerDeviceInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1C00087E4 (RIMRetrieveLinkCollection.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C60A4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     rimHidP_GetSpecificValueCaps @ 0x1C0008C68 (rimHidP_GetSpecificValueCaps.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
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
  int v17; // edx
  __int64 v18; // rax
  unsigned __int16 v19; // dx
  unsigned __int16 v20; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v21[2]; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int16 v22; // [rsp+4Ch] [rbp-6Dh] BYREF
  __int16 v23[2]; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int16 v24; // [rsp+54h] [rbp-65h]
  int v25; // [rsp+58h] [rbp-61h]
  __int64 v26; // [rsp+60h] [rbp-59h]
  char v27[2]; // [rsp+70h] [rbp-49h] BYREF
  char v28; // [rsp+72h] [rbp-47h]

  v4 = *(_QWORD *)(a1 + 712);
  v5 = 0;
  v24 = a2;
  v26 = a1;
  v7 = a3;
  v20 = a3;
  v21[0] = a3;
  v23[0] = 1;
  SpecificValueCaps = -1073741668;
  v22 = 0;
  v10 = 0;
  v25 = 0;
  v11 = a2;
  if ( v4 )
  {
    v12 = *(_WORD *)(v4 + 14);
    if ( v12 )
    {
      v11 = v12;
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v12, 0, 0LL, (__int64)&v22, a4);
      if ( SpecificValueCaps == -1072627705 )
      {
        v18 = *(_QWORD *)(a1 + 712);
        v21[0] = v22;
        v7 = v22 + v20;
        *(_WORD *)(v18 + 44) = v22;
        v25 = 1;
      }
      else
      {
        LOBYTE(v17) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v17,
          3,
          24,
          (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids);
      }
    }
  }
  if ( v7 > 1u )
  {
    v13 = Win32AllocPool(72LL * v7, 1668313938LL);
    if ( v13 )
    {
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 1, v11, 48, (__int64)v27, (__int64)v23, a4);
      if ( SpecificValueCaps >= 0 )
      {
        *(_BYTE *)(v26 + 1424) = v28;
        SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v11, 0, v13, (__int64)v21, a4);
        if ( SpecificValueCaps >= 0 )
        {
          if ( v21[0] )
          {
            v14 = (_BYTE *)(v13 + 2);
            v15 = v21[0];
            do
            {
              if ( *v14 == v28 )
                ++v10;
              v14 += 72;
              --v15;
            }
            while ( v15 );
          }
          if ( v25 )
          {
            SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v24, 0, v13 + 72LL * v21[0], (__int64)&v20, a4);
            if ( SpecificValueCaps >= 0 )
            {
              v19 = v21[0];
              if ( v20 )
              {
                do
                {
                  if ( v19 >= v7 )
                    break;
                  if ( *(_BYTE *)(v13 + 72LL * v19 + 2) == v28 )
                    ++v10;
                  ++v19;
                }
                while ( (unsigned __int16)(v19 - v21[0]) < v20 );
              }
            }
          }
          *(_DWORD *)(v26 + 316) = v10;
        }
      }
      Win32FreePool(v13);
    }
  }
  LOBYTE(v5) = SpecificValueCaps >= 0;
  return v5;
}
