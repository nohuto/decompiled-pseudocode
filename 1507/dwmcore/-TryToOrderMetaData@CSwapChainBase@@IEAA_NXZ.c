/*
 * XREFs of ?TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ @ 0x18008BF78
 * Callers:
 *     ?Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180042460 (-Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z @ 0x18013A028 (-RemoveAt@-$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z.c)
 */

char __fastcall CSwapChainBase::TryToOrderMetaData(CSwapChainBase *this)
{
  char v1; // r14
  unsigned int v2; // r12d
  unsigned int v3; // ebx
  __int64 v4; // r15
  __int64 v7; // r14
  __int64 *v8; // rsi
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  unsigned int v11; // ecx
  __int64 v12; // rax
  int v13; // eax
  char v14; // r13
  int v15; // r10d
  bool v16; // zf
  unsigned int v17; // ecx
  char v18; // r11
  unsigned int v19; // r9d
  __int64 v20; // r8
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  int v23; // edx
  bool v24; // cc
  unsigned int v25; // ebx
  __int64 v26; // r11
  __int64 v27; // r8
  int v28; // ecx
  int v29; // eax
  __int128 v30; // xmm2
  __int128 v31; // xmm3
  __int128 v32; // xmm4
  __int64 v33; // rax
  unsigned int i; // ebx
  __int128 v35; // [rsp+40h] [rbp-21h] BYREF
  int v36; // [rsp+50h] [rbp-11h]
  __int64 v37; // [rsp+54h] [rbp-Dh]
  __int128 v38; // [rsp+60h] [rbp-1h] BYREF
  __int128 v39; // [rsp+70h] [rbp+Fh]

  v36 = 0;
  v1 = 1;
  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  v37 = 0LL;
  v35 = 0LL;
  if ( !*((_DWORD *)this + 62) )
    goto LABEL_2;
  v7 = v35;
  v8 = (__int64 *)((char *)this + 224);
  do
  {
    v9 = *(_OWORD *)(*v8 + 48 * v4 + 16);
    v10 = *(_OWORD *)(*v8 + 48 * v4 + 32);
    if ( *(_DWORD *)(*v8 + 48 * v4) == 1 )
    {
      v11 = v3 + 1;
      v38 = *(_OWORD *)(*v8 + 48 * v4 + 16);
      v39 = v10;
      if ( v3 + 1 >= v3 )
      {
        if ( v11 > v2 )
        {
          v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v35, 0x20u, 1, &v38);
          if ( v13 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
          v3 = HIDWORD(v37);
          v2 = v37;
          v7 = v35;
        }
        else
        {
          v12 = v3++;
          v12 *= 32LL;
          HIDWORD(v37) = v11;
          *(_OWORD *)(v12 + v7) = v9;
          *(_OWORD *)(v12 + v7 + 16) = v39;
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
    }
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (unsigned int)v4 < *((_DWORD *)this + 62) );
  v14 = 0;
  if ( !v3 )
  {
    v1 = 1;
    goto LABEL_2;
  }
  v15 = *(_DWORD *)(v7 + 16);
  v16 = (double)v15 == 0.0;
  if ( (double)v15 == 0.0 )
  {
LABEL_17:
    if ( !v16 )
      v14 = 1;
    if ( v3 != 1 )
    {
      v17 = *((_DWORD *)this + 62);
      v18 = 1;
      v19 = 0;
      if ( v17 )
      {
        v20 = *v8;
        do
        {
          if ( *(_DWORD *)(v20 + 48LL * v19) == 1 )
          {
            if ( v18 )
            {
              v18 = 0;
            }
            else if ( v14 )
            {
              if ( *(_DWORD *)(v20 + 48LL * v19 + 32) != v15 || (double)*(int *)(v20 + 48LL * v19 + 36) != 0.0 )
              {
                v1 = 0;
                v21 = 0;
                do
                {
                  if ( *(_DWORD *)(*v8 + 48LL * v21) == 1 )
                    DynArray<_DWMIndirectMetaData,0>::RemoveAt(v8, v21--);
                  ++v21;
                }
                while ( v21 < *((_DWORD *)this + 62) );
                goto LABEL_58;
              }
            }
            else if ( *(_DWORD *)(v20 + 48LL * v19 + 36) != *(_DWORD *)(v7 + 20)
                   || (double)*(int *)(v20 + 48LL * v19 + 32) != 0.0 )
            {
              v1 = 0;
              v22 = 0;
              do
              {
                if ( *(_DWORD *)(*v8 + 48LL * v22) == 1 )
                  DynArray<_DWMIndirectMetaData,0>::RemoveAt(v8, v22--);
                ++v22;
              }
              while ( v22 < *((_DWORD *)this + 62) );
              goto LABEL_58;
            }
          }
          ++v19;
        }
        while ( v19 < v17 );
      }
      v23 = -1;
      if ( v14 )
        v24 = v15 <= 0;
      else
        v24 = *(_DWORD *)(v7 + 20) <= 0;
      if ( !v24 )
        v23 = 1;
      v25 = 0;
      if ( v17 != 1 )
      {
        do
        {
          if ( *(_DWORD *)(*v8 + 48LL * v25) == 1 )
          {
            v26 = v25 + 1;
            if ( (unsigned int)v26 < v17 )
            {
              do
              {
                v27 = *v8;
                if ( *(_DWORD *)(*v8 + 48 * v26) == 1 )
                {
                  if ( v14 )
                  {
                    v28 = *(_DWORD *)(v27 + 48 * v26 + 16);
                    v29 = *(_DWORD *)(v27 + 48LL * v25 + 16);
                  }
                  else
                  {
                    v28 = *(_DWORD *)(v27 + 48 * v26 + 20);
                    v29 = *(_DWORD *)(v27 + 48LL * v25 + 20);
                  }
                  if ( v23 * v29 < v23 * v28 )
                  {
                    v30 = *(_OWORD *)(v27 + 48LL * v25);
                    v31 = *(_OWORD *)(v27 + 48LL * v25 + 16);
                    v32 = *(_OWORD *)(v27 + 48LL * v25 + 32);
                    *(_OWORD *)(v27 + 48LL * v25) = *(_OWORD *)(v27 + 48 * v26);
                    *(_OWORD *)(v27 + 48LL * v25 + 16) = *(_OWORD *)(v27 + 48 * v26 + 16);
                    *(_OWORD *)(v27 + 48LL * v25 + 32) = *(_OWORD *)(v27 + 48 * v26 + 32);
                    v33 = *v8;
                    *(_OWORD *)(v33 + 48 * v26) = v30;
                    *(_OWORD *)(v33 + 48 * v26 + 16) = v31;
                    *(_OWORD *)(v33 + 48 * v26 + 32) = v32;
                  }
                }
                v26 = (unsigned int)(v26 + 1);
              }
              while ( (unsigned int)v26 < *((_DWORD *)this + 62) );
            }
          }
          v17 = *((_DWORD *)this + 62);
          ++v25;
        }
        while ( v25 < v17 - 1 );
      }
    }
    v1 = 1;
    goto LABEL_58;
  }
  if ( (double)*(int *)(v7 + 20) == 0.0 )
  {
    v16 = (double)v15 == 0.0;
    goto LABEL_17;
  }
  if ( v3 <= 1 )
  {
    v1 = 1;
  }
  else
  {
    v1 = 0;
    for ( i = 0; i < *((_DWORD *)this + 62); ++i )
    {
      if ( *(_DWORD *)(*v8 + 48LL * i) == 1 )
        DynArray<_DWMIndirectMetaData,0>::RemoveAt(v8, i--);
    }
  }
LABEL_58:
  HIDWORD(v37) = 0;
  DynArrayImpl<0>::ShrinkToSize(&v35, 0x20u);
LABEL_2:
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v35);
  return v1;
}
