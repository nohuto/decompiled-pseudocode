/*
 * XREFs of ?OnEndComposition@CCrossThreadComposition@@MEAAXXZ @ 0x180038C60
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18003B3A0 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EndOfFrame@CWarpDrawListCacheEvents@@UEAAXPEAVCCounterManager@@@Z @ 0x1800B0B40 (-EndOfFrame@CWarpDrawListCacheEvents@@UEAAXPEAVCCounterManager@@@Z.c)
 *     ?EndOfFrame@CHwDrawListCacheEvents@@UEAAXPEAVCCounterManager@@@Z @ 0x1800B0B60 (-EndOfFrame@CHwDrawListCacheEvents@@UEAAXPEAVCCounterManager@@@Z.c)
 *     ?EndOfFrame@CPrimitiveGroupEvents@@UEAAXPEAVCCounterManager@@@Z @ 0x1800B0B80 (-EndOfFrame@CPrimitiveGroupEvents@@UEAAXPEAVCCounterManager@@@Z.c)
 *     ?EndOfFrame@CHwCallbackRendererEvents@@UEAAXPEAVCCounterManager@@@Z @ 0x1800B0BA0 (-EndOfFrame@CHwCallbackRendererEvents@@UEAAXPEAVCCounterManager@@@Z.c)
 *     ?EndOfFrame@CWarpCallbackRendererEvents@@UEAAXPEAVCCounterManager@@@Z @ 0x1800B0BE0 (-EndOfFrame@CWarpCallbackRendererEvents@@UEAAXPEAVCCounterManager@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qqx @ 0x18011720C (Template_qqx.c)
 *     Template_qqqqq @ 0x18011A64C (Template_qqqqq.c)
 *     Template_xxxx @ 0x18011BF40 (Template_xxxx.c)
 */

void __fastcall CCrossThreadComposition::OnEndComposition(CCrossThreadComposition *this, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // r10
  unsigned int v4; // ebx
  unsigned int v6; // r12d
  unsigned __int8 v7; // r14
  bool v8; // r13
  unsigned int i; // ebx
  __int64 v10; // r15
  __int64 v11; // rdi
  bool (__fastcall *v12)(CAnimation *__hidden, bool *); // rax
  __int64 v13; // rcx
  bool (__fastcall *v14)(CAnimation *__hidden); // rax
  char v15; // al
  __int64 v16; // rax
  unsigned int v17; // ebp
  unsigned __int8 v18; // bl
  unsigned __int8 v19; // r15
  __int64 v20; // rcx
  char v21; // di
  struct CCounterManager *v22; // r14
  __int64 v23; // rsi
  struct CCounterManager *v24; // rdi
  const char **v25; // rbx
  CPrimitiveGroupEvents *v26; // rcx
  void (__fastcall *v27)(CWarpDrawListCacheEvents *__hidden, struct CCounterManager *); // rax
  char v28; // al
  __int64 v29; // rdi
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // rax
  _QWORD *v33; // rax
  unsigned __int64 v34; // rcx
  unsigned int v35; // eax
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned int j; // r12d
  _DWORD *v43; // r13
  int v44; // ecx
  _BYTE v45[20]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v46; // [rsp+54h] [rbp-44h]
  unsigned __int8 v47; // [rsp+A0h] [rbp+8h]
  char v48; // [rsp+A8h] [rbp+10h] BYREF

  v3 = 0;
  v4 = 0;
  v47 = 0;
  while ( v4 < *((_DWORD *)this + 116) )
  {
    v29 = *((_QWORD *)this + 55) + 16LL * v4;
    v30 = *(_DWORD *)(v29 + 4);
    if ( v30 )
    {
      v31 = v30 - 1;
      if ( v31 )
      {
        if ( v31 == 1 )
        {
          v32 = *((_QWORD *)this + 43);
          if ( !v32
            || (v33 = *(_QWORD **)(v32 + 16), v34 = *(_QWORD *)(v29 + 8), v33[11] >= v34)
            || v33[7] > v34 && *(_QWORD *)((char *)v33 + 76) < v34 )
          {
            *(_DWORD *)v45 = 8;
            *(_OWORD *)&v45[4] = 0uLL;
            v46 = 0LL;
            *(_DWORD *)&v45[8] = *(_DWORD *)v29;
            CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)v45);
            *(_DWORD *)(v29 + 4) = 0;
            *(_QWORD *)(v29 + 8) = 0LL;
            v35 = *((_DWORD *)this + 116);
            *(_OWORD *)v45 = *(_OWORD *)v29;
            if ( v4 >= v35 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
            }
            else
            {
              v36 = *((_QWORD *)this + 55);
              a3 = v4;
              if ( v4 < v35 - 1 )
              {
                do
                {
                  a2 = (unsigned int)(a3 + 1);
                  v40 = 2LL * (unsigned int)a3;
                  a3 = (unsigned int)a2;
                  *(_OWORD *)(v36 + 8 * v40) = *(_OWORD *)(v36 + 16 * a2);
                }
                while ( (unsigned int)a2 < *((_DWORD *)this + 116) - 1 );
              }
              --*((_DWORD *)this + 116);
            }
            v3 = v47;
            if ( v4 )
              --v4;
            goto LABEL_74;
          }
        }
      }
      else
      {
        *(_DWORD *)(v29 + 4) = 2;
        v37 = *((_QWORD *)this + 43);
        if ( v37 )
        {
          v38 = *(_QWORD *)(v37 + 16);
          if ( *((_DWORD *)this + 84) == 1 )
            v39 = *(_QWORD *)(v38 + 88);
          else
            v39 = *(_QWORD *)(v38 + 76);
          *(_QWORD *)(v29 + 8) = v39;
          ++*(_QWORD *)(v29 + 8);
        }
      }
    }
    *(_OWORD *)v45 = *(_OWORD *)v29;
LABEL_74:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      Template_qqx(*(_DWORD *)v45, *(_DWORD *)&v45[4], *(_DWORD *)&v45[4], *(_DWORD *)v45, v45[8]);
      v3 = v47;
    }
    ++v4;
    v3 |= *(_DWORD *)(v29 + 4) == 2;
    v47 = v3;
  }
  v6 = *((_DWORD *)this + 154);
  v7 = 0;
  v8 = (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0;
  for ( i = 0; (!v7 || v8) && i < v6; ++i )
  {
    v48 = 0;
    v10 = 8LL * i;
    v11 = *(_QWORD *)(v10 + *((_QWORD *)this + 74));
    v12 = *(bool (__fastcall **)(CAnimation *__hidden, bool *))(*(_QWORD *)v11 + 8LL);
    if ( v12 != CAnimation::IsAnimate )
    {
      v12(*(CAnimation **)(v10 + *((_QWORD *)this + 74)), (bool *)&v48);
      v15 = v48;
      goto LABEL_12;
    }
    v13 = v11 - 112;
    v14 = *(bool (__fastcall **)(CAnimation *__hidden))(*(_QWORD *)(v11 - 112) + 120LL);
    if ( v14 == CAnimation::HasEnded )
    {
      if ( (*(_BYTE *)(v13 + 176) & 2) != 0 || !*(_QWORD *)(v13 + 184) )
        goto LABEL_10;
    }
    else if ( v14((CAnimation *)v13) )
    {
      goto LABEL_10;
    }
    if ( *(_DWORD *)(v11 + 32) )
    {
      v28 = *(_BYTE *)(v11 + 64);
      if ( (v28 & 4) == 0 && (v28 & 0x11) != 0x11 )
      {
        v15 = 1;
        goto LABEL_11;
      }
    }
LABEL_10:
    v15 = 0;
LABEL_11:
    v48 = v15;
LABEL_12:
    if ( v15 )
    {
      v7 = 1;
      if ( v8 )
      {
        v41 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + *((_QWORD *)this + 74)) + 24LL))(*(_QWORD *)(v10 + *((_QWORD *)this + 74)));
        if ( v41 )
        {
          ++*(_DWORD *)(v41 + 76);
          *((_BYTE *)this + 496) = 1;
        }
      }
    }
  }
  v16 = *((_QWORD *)this + 21);
  LOBYTE(a2) = *(_DWORD *)(v16 + 96) > 0;
  v17 = 0;
  v18 = *(int *)(v16 + 96) > 0 || *(_DWORD *)(v16 + 304) || *(_DWORD *)(v16 + 272) || (*(_BYTE *)(v16 + 384) & 2) != 0;
  v19 = *(_QWORD *)(*((_QWORD *)this + 5) + 376LL) != 0LL;
  v20 = *((_QWORD *)this + 65);
  v21 = 0;
  if ( v20 )
  {
    LOBYTE(a3) = *(_DWORD *)(v16 + 304) != 0;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v20 + 24) + 56LL))(
           *(_QWORD *)(v20 + 24),
           a2,
           a3) )
    {
      v21 = 1;
    }
  }
  if ( *((_BYTE *)this + 496) )
  {
    for ( j = 0; j < *((_DWORD *)this + 74); ++j )
    {
      v43 = *(_DWORD **)(*((_QWORD *)this + 34) + 8LL * j);
      if ( v43 )
      {
        v44 = v43[19];
        if ( v44 || v43[17] )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
            Template_xxxx(v44, a2, v43[4], v43[5], v44, v43[17]);
          v43[19] = 0;
          v43[17] = 0;
        }
      }
    }
    *((_BYTE *)this + 496) = 0;
  }
  if ( v47 || v7 || v18 || v19 || v21 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qqqqq(v19, v18, v47, v7, v18, v19, v21);
    SetEvent(*(HANDLE *)(*((_QWORD *)this + 64) + 96LL));
  }
  v22 = CCounterManager::s_pGlobalPerFrameCounterManager;
  v23 = 21LL;
  CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved = 0;
  v24 = CCounterManager::s_pGlobalPerFrameCounterManager;
  v25 = (const char **)((char *)CCounterManager::s_pGlobalPerFrameCounterManager + 88);
  do
  {
    if ( *((_BYTE *)v25 + 8) )
      DbgPrintEx(0x65u, 0, "EndFrameStats %s %d\n", *v25, *(_DWORD *)v24);
    v24 = (struct CCounterManager *)((char *)v24 + 4);
    v25 += 2;
    --v23;
  }
  while ( v23 );
  if ( *((_DWORD *)v22 + 112) )
  {
    do
    {
      v26 = *(CPrimitiveGroupEvents **)(*((_QWORD *)v22 + 53) + 8LL * v17);
      v27 = **(void (__fastcall ***)(CWarpDrawListCacheEvents *__hidden, struct CCounterManager *))v26;
      if ( v27 == CPrimitiveGroupEvents::EndOfFrame )
      {
        CPrimitiveGroupEvents::EndOfFrame(v26, v22);
      }
      else if ( v27 == CWarpDrawListCacheEvents::EndOfFrame )
      {
        CWarpDrawListCacheEvents::EndOfFrame(v26, v22);
      }
      else if ( v27 == CWarpCallbackRendererEvents::EndOfFrame )
      {
        CWarpCallbackRendererEvents::EndOfFrame(v26, v22);
      }
      else if ( v27 == CHwCallbackRendererEvents::EndOfFrame )
      {
        CHwCallbackRendererEvents::EndOfFrame(v26, v22);
      }
      else if ( v27 == CHwDrawListCacheEvents::EndOfFrame )
      {
        CHwDrawListCacheEvents::EndOfFrame(v26, v22);
      }
      else
      {
        v27(v26, v22);
      }
      ++v17;
    }
    while ( v17 < *((_DWORD *)v22 + 112) );
  }
}
