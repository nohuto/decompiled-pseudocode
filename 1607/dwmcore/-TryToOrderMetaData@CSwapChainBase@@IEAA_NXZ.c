/*
 * XREFs of ?TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ @ 0x1800B9B18
 * Callers:
 *     ?Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18007A2E8 (-Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z @ 0x18017B0E8 (-RemoveAt@-$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z.c)
 */

char __fastcall CSwapChainBase::TryToOrderMetaData(CSwapChainBase *this)
{
  char v2; // r12
  unsigned int v3; // ebx
  unsigned int v4; // r15d
  char v5; // r13
  __int64 v7; // r14
  __int64 *v8; // rsi
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  unsigned int v11; // ecx
  __int64 v12; // rax
  int v13; // eax
  int v14; // r10d
  bool v15; // zf
  unsigned int v16; // ecx
  char v17; // r11
  unsigned int v18; // r9d
  __int64 v19; // r8
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  int v22; // edx
  bool v23; // cc
  unsigned int v24; // ebx
  __int64 v25; // r11
  __int64 v26; // r8
  int v27; // ecx
  int v28; // eax
  __int128 v29; // xmm2
  __int128 v30; // xmm3
  __int128 v31; // xmm4
  __int64 v32; // rax
  unsigned int i; // ebx
  __int128 v34; // [rsp+40h] [rbp-21h] BYREF
  __int64 v35; // [rsp+50h] [rbp-11h]
  unsigned int v36; // [rsp+58h] [rbp-9h]
  __int128 v37; // [rsp+60h] [rbp-1h] BYREF
  __int128 v38; // [rsp+70h] [rbp+Fh]

  v2 = 0;
  v3 = 0;
  v35 = 0LL;
  v4 = 0;
  v36 = 0;
  v5 = 1;
  v34 = 0LL;
  if ( *((_DWORD *)this + 62) )
  {
    v7 = v34;
    v8 = (__int64 *)((char *)this + 224);
    v5 = 1;
    do
    {
      v9 = *(_OWORD *)(*v8 + 48LL * v4 + 16);
      v10 = *(_OWORD *)(*v8 + 48LL * v4 + 32);
      if ( *(_DWORD *)(*v8 + 48LL * v4) == 1 )
      {
        v11 = v3 + 1;
        v37 = *(_OWORD *)(*v8 + 48LL * v4 + 16);
        v38 = v10;
        if ( v3 + 1 < v3 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
        else if ( v11 > HIDWORD(v35) )
        {
          v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v34, 0x20u, 1, &v37);
          if ( v13 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
          v3 = v36;
          v7 = v34;
        }
        else
        {
          v12 = v3++;
          v12 *= 32LL;
          v36 = v11;
          *(_OWORD *)(v12 + v7) = v9;
          *(_OWORD *)(v12 + v7 + 16) = v38;
        }
      }
      ++v4;
    }
    while ( v4 < *((_DWORD *)this + 62) );
    if ( v3 )
    {
      v14 = *(_DWORD *)(v7 + 16);
      v15 = (double)v14 == 0.0;
      if ( (double)v14 != 0.0 )
      {
        if ( (double)*(int *)(v7 + 20) != 0.0 )
        {
          if ( v3 > 1 )
          {
            v5 = 0;
            for ( i = 0; i < *((_DWORD *)this + 62); ++i )
            {
              if ( *(_DWORD *)(*v8 + 48LL * i) == 1 )
                DynArray<_DWMIndirectMetaData,0>::RemoveAt(v8, i--);
            }
          }
LABEL_64:
          v36 = 0;
          DynArrayImpl<0>::ShrinkToSize((__int64)&v34, 0x20u);
          goto LABEL_2;
        }
        v15 = (double)v14 == 0.0;
      }
      if ( !v15 )
        v2 = 1;
      if ( v3 != 1 )
      {
        v16 = *((_DWORD *)this + 62);
        v17 = 1;
        v18 = 0;
        if ( !v16 )
        {
LABEL_41:
          v22 = -1;
          if ( v2 )
            v23 = v14 <= 0;
          else
            v23 = *(_DWORD *)(v7 + 20) <= 0;
          if ( !v23 )
            v22 = 1;
          v24 = 0;
          if ( v16 != 1 )
          {
            v5 = 1;
            do
            {
              if ( *(_DWORD *)(*v8 + 48LL * v24) == 1 )
              {
                v25 = v24 + 1;
                if ( (unsigned int)v25 < v16 )
                {
                  do
                  {
                    v26 = *v8;
                    if ( *(_DWORD *)(*v8 + 48 * v25) == 1 )
                    {
                      if ( v2 )
                      {
                        v27 = *(_DWORD *)(v26 + 48 * v25 + 16);
                        v28 = *(_DWORD *)(v26 + 48LL * v24 + 16);
                      }
                      else
                      {
                        v27 = *(_DWORD *)(v26 + 48 * v25 + 20);
                        v28 = *(_DWORD *)(v26 + 48LL * v24 + 20);
                      }
                      if ( v22 * v28 < v22 * v27 )
                      {
                        v29 = *(_OWORD *)(v26 + 48LL * v24);
                        v30 = *(_OWORD *)(v26 + 48LL * v24 + 16);
                        v31 = *(_OWORD *)(v26 + 48LL * v24 + 32);
                        *(_OWORD *)(v26 + 48LL * v24) = *(_OWORD *)(v26 + 48 * v25);
                        *(_OWORD *)(v26 + 48LL * v24 + 16) = *(_OWORD *)(v26 + 48 * v25 + 16);
                        *(_OWORD *)(v26 + 48LL * v24 + 32) = *(_OWORD *)(v26 + 48 * v25 + 32);
                        v32 = *v8;
                        *(_OWORD *)(v32 + 48 * v25) = v29;
                        *(_OWORD *)(v32 + 48 * v25 + 16) = v30;
                        *(_OWORD *)(v32 + 48 * v25 + 32) = v31;
                      }
                    }
                    v25 = (unsigned int)(v25 + 1);
                  }
                  while ( (unsigned int)v25 < *((_DWORD *)this + 62) );
                }
              }
              v16 = *((_DWORD *)this + 62);
              ++v24;
            }
            while ( v24 < v16 - 1 );
          }
          goto LABEL_64;
        }
        v19 = *v8;
        while ( 1 )
        {
          if ( *(_DWORD *)(v19 + 48LL * v18) == 1 )
          {
            if ( v17 )
            {
              v17 = 0;
            }
            else if ( v2 )
            {
              if ( *(_DWORD *)(v19 + 48LL * v18 + 32) != v14 || (double)*(int *)(v19 + 48LL * v18 + 36) != 0.0 )
              {
                v5 = 0;
                v20 = 0;
                do
                {
                  if ( *(_DWORD *)(*v8 + 48LL * v20) == 1 )
                    DynArray<_DWMIndirectMetaData,0>::RemoveAt(v8, v20--);
                  ++v20;
                }
                while ( v20 < *((_DWORD *)this + 62) );
                goto LABEL_64;
              }
            }
            else if ( *(_DWORD *)(v19 + 48LL * v18 + 36) != *(_DWORD *)(v7 + 20)
                   || (double)*(int *)(v19 + 48LL * v18 + 32) != 0.0 )
            {
              v5 = 0;
              v21 = 0;
              do
              {
                if ( *(_DWORD *)(*v8 + 48LL * v21) == 1 )
                  DynArray<_DWMIndirectMetaData,0>::RemoveAt(v8, v21--);
                ++v21;
              }
              while ( v21 < *((_DWORD *)this + 62) );
              goto LABEL_64;
            }
          }
          if ( ++v18 >= v16 )
            goto LABEL_41;
        }
      }
      goto LABEL_64;
    }
  }
LABEL_2:
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&v34);
  return v5;
}
