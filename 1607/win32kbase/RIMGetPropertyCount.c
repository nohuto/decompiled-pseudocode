/*
 * XREFs of RIMGetPropertyCount @ 0x1C0008AB8
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0008C38 (RIMCreatePointerDeviceInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1C00097F0 (RIMRetrieveLinkCollection.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00D5734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     rimHidP_GetSpecificValueCaps @ 0x1C0009C68 (rimHidP_GetSpecificValueCaps.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
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
  unsigned __int16 v21; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int16 v22[2]; // [rsp+50h] [rbp-69h] BYREF
  __int16 v23; // [rsp+54h] [rbp-65h] BYREF
  unsigned __int16 v24; // [rsp+58h] [rbp-61h]
  int v25; // [rsp+5Ch] [rbp-5Dh]
  __int64 v26; // [rsp+60h] [rbp-59h]
  char v27[2]; // [rsp+70h] [rbp-49h] BYREF
  char v28; // [rsp+72h] [rbp-47h]

  v4 = *(_QWORD *)(a1 + 680);
  v5 = 0;
  v24 = a2;
  v26 = a1;
  v7 = a3;
  v21 = a3;
  v20 = a3;
  v23 = 1;
  SpecificValueCaps = -1073741668;
  v22[0] = 0;
  v10 = 0;
  v25 = 0;
  v11 = a2;
  if ( v4 )
  {
    v12 = *(_WORD *)(v4 + 8);
    if ( v12 )
    {
      v11 = v12;
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v12, 0, 0LL, (__int64)v22, a4);
      if ( SpecificValueCaps == -1072627705 )
      {
        v18 = *(_QWORD *)(a1 + 680);
        v20 = v22[0];
        v7 = v22[0] + v21;
        *(_WORD *)(v18 + 10) = v22[0];
        v25 = 1;
      }
      else
      {
        LOBYTE(v17) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v17,
          3,
          28,
          (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids);
      }
    }
  }
  if ( v7 > 1u )
  {
    v13 = Win32AllocPool(72LL * v7, 1668313938LL);
    if ( v13 )
    {
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 1, v11, 48, (__int64)v27, (__int64)&v23, a4);
      if ( SpecificValueCaps >= 0 )
      {
        *(_BYTE *)(v26 + 1392) = v28;
        SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v11, 0, v13, (__int64)&v20, a4);
        if ( SpecificValueCaps >= 0 )
        {
          if ( v20 )
          {
            v14 = (_BYTE *)(v13 + 2);
            v15 = v20;
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
            SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v24, 0, v13 + 72LL * v20, (__int64)&v21, a4);
            if ( SpecificValueCaps >= 0 )
            {
              v19 = v20;
              if ( v21 )
              {
                do
                {
                  if ( v19 >= v7 )
                    break;
                  if ( *(_BYTE *)(v13 + 72LL * v19 + 2) == v28 )
                    ++v10;
                  ++v19;
                }
                while ( (unsigned __int16)(v19 - v20) < v21 );
              }
            }
          }
          *(_DWORD *)(v26 + 304) = v10;
        }
      }
      Win32FreePool(v13);
    }
  }
  LOBYTE(v5) = SpecificValueCaps >= 0;
  return v5;
}
