/*
 * XREFs of ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x1800869E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApiPause@Animation@Animations@Components@@QEAAJXZ @ 0x1800190B4 (-ApiPause@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?Repeat@Sequence@Animations@Components@@QEAAXXZ @ 0x180019218 (-Repeat@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?Update@Timer@Animations@Components@@QEAAXH_N@Z @ 0x1800192E8 (-Update@Timer@Animations@Components@@QEAAXH_N@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800194EC (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?Round@Math@Animations@Components@@SAHM@Z @ 0x18002D3CC (-Round@Math@Animations@Components@@SAHM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Calculate@Sequence@Animations@Components@@QEAAXXZ @ 0x180085810 (-Calculate@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?ConfigureTimer@Sequence@Animations@Components@@QEAAXXZ @ 0x180085D0C (-ConfigureTimer@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x1800862B4 (-ApiPlay@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180086378 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?Commit@Animation@Animations@Components@@QEAAJXZ @ 0x1800864B0 (-Commit@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?PrepareSequenceForIteration@Animation@Animations@Components@@AEAAXI@Z @ 0x1800865D0 (-PrepareSequenceForIteration@Animation@Animations@Components@@AEAAXI@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z @ 0x1800867B0 (-OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z.c)
 *     ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXXZ @ 0x180086954 (-ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXXZ.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180086F40 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800AD090 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CKeyframeAnimation::CalculateValueWorker(CKeyframeAnimation *this, struct CExpressionValueStack *a2)
{
  int v4; // eax
  int v5; // ebx
  LONGLONG v6; // rbx
  Components::Animations::Animation *v7; // rcx
  unsigned int v8; // ecx
  __int64 v9; // r8
  char v10; // al
  char v12; // r14
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rcx
  int v22; // r9d
  unsigned int v23; // r8d
  int v24; // edx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rbx
  char v28; // al
  __int64 v29; // rcx
  char v30; // dl
  __int64 v31; // rcx
  __int64 v32; // rbx
  float v33; // xmm0_4
  int v34; // eax
  int v35; // r11d
  int v36; // eax
  int v37; // eax
  __int64 v38; // rcx
  __int64 (__fastcall *v39)(__int64, int); // rax
  bool v40; // zf
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  __int64 v44; // xmm1_8
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  unsigned int v48; // [rsp+28h] [rbp-39h]
  unsigned int v49; // [rsp+28h] [rbp-39h]
  __int128 v50; // [rsp+38h] [rbp-29h] BYREF
  __int128 v51; // [rsp+48h] [rbp-19h]
  __int128 v52; // [rsp+58h] [rbp-9h]
  __int128 v53; // [rsp+68h] [rbp+7h]
  int v54; // [rsp+78h] [rbp+17h]

  if ( !*((_QWORD *)this + 48) )
    goto LABEL_74;
  *((_QWORD *)this + 50) = a2;
  v4 = CKeyframeAnimation::ApplyPlaybackStateChanges(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v48 = 1187;
    goto LABEL_95;
  }
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL)
     - Components::Animations::Time::s_luBegin.QuadPart
     - (*((_QWORD *)this + 52)
      - Components::Animations::Time::s_luBegin.QuadPart);
  if ( v6 < 0 )
    goto LABEL_11;
  v7 = (Components::Animations::Animation *)*((_QWORD *)this + 48);
  if ( (*((_BYTE *)v7 + 104) & 4) != 0 )
  {
    v12 = 0;
    if ( ((*((_BYTE *)this + 452) & 2) != 0 || !*((_BYTE *)this + 196)) && *((_DWORD *)this + 111) == 2 )
    {
      Components::Animations::Animation::ApiPlay(v7);
      v12 = 1;
    }
    if ( v6 == 0x7FFFFFFFFFFFFFFFLL )
    {
      LODWORD(v17) = 0x7FFFFFFF;
    }
    else
    {
      v13 = 1000000 * v6;
      if ( Components::Animations::Time::s_luFreq.QuadPart == 3312656 )
        v14 = v13 / 3312656;
      else
        v14 = v13 / Components::Animations::Time::s_luFreq.QuadPart;
      v15 = 500LL;
      if ( v14 < 0 )
        v15 = -500LL;
      v16 = (__int64)((unsigned __int128)((v15 + v14) * (__int128)0x20C49BA5E353F7CFLL) >> 64) >> 7;
      v17 = (v16 >> 63) + v16;
    }
    v18 = *((_QWORD *)this + 48);
    if ( (*(_BYTE *)(v18 + 104) & 2) != 0 )
    {
      if ( *(_DWORD *)(v18 + 40) == 2 )
      {
        v32 = *(_QWORD *)(v18 + 16);
        v33 = 0.0;
        v34 = *(_DWORD *)(v32 + 8);
        if ( v34 > 0 )
          v33 = (float)*(int *)(*(_QWORD *)v32 + 24LL * (v34 - 1)) / 1000.0;
        Components::Animations::Math::Round((float)(v33 * *(float *)(v18 + 60)) * 1000.0);
        Components::Animations::Sequence::ConfigureTimer((int **)v32);
        *(_DWORD *)(v32 + 208) = v35;
        Components::Animations::Timer::Update((Components::Animations::Timer *)(v32 + 208), 0, 0);
      }
      else
      {
        v19 = *(_DWORD *)(v18 + 36);
        v20 = *(_DWORD *)(v18 + 32);
        if ( v19 < v20 )
        {
          v41 = v20 - v19;
          if ( (int)v17 < v41 )
            v41 = v17;
          *(_DWORD *)(v18 + 36) = v41 + v19;
          LODWORD(v17) = v17 - v41;
        }
        v21 = *(_QWORD *)(v18 + 16);
        if ( (*(_BYTE *)(v21 + 264) & 2) != 0 )
        {
          v22 = *(_DWORD *)(v21 + 212);
          v23 = v17 + *(_DWORD *)(v21 + 208);
          v24 = *(_DWORD *)(v21 + 220);
          v25 = v23 - v22;
          *(_DWORD *)(v21 + 208) = v23;
          if ( (int)(v23 - v22) >= v24 || v23 >= *(_DWORD *)(v21 + 216) )
          {
            v36 = *(_DWORD *)(v21 + 216) - v22;
            *(_WORD *)(v21 + 228) = 256;
            if ( v24 >= v36 )
              v24 = v36;
            *(_DWORD *)(v21 + 224) = v24;
          }
          else if ( v25 < 0 )
          {
            *(_WORD *)(v21 + 228) = 0;
            *(_DWORD *)(v21 + 224) = 0;
          }
          else
          {
            *(_WORD *)(v21 + 228) = 1;
            *(_DWORD *)(v21 + 224) = v25;
          }
        }
      }
    }
    *((_QWORD *)this + 52) = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL);
    v26 = *((_QWORD *)this + 48);
    if ( (*(_BYTE *)(v26 + 104) & 4) != 0 && *(_DWORD *)(v26 + 36) < *(_DWORD *)(v26 + 32) )
      goto LABEL_43;
    if ( (*((_BYTE *)this + 452) & 4) == 0 )
    {
      CKeyframeAnimation::ProcessExpressionKeyFrames(this);
      if ( *((_QWORD *)this + 41) )
      {
        v42 = CKeyframeAnimation::SampleStartingValue(this);
        v5 = v42;
        if ( v42 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x7DDu);
LABEL_35:
          if ( v5 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x4CAu);
            goto LABEL_12;
          }
          v27 = *((_QWORD *)this + 48);
          v28 = *(_BYTE *)(v27 + 104);
          if ( (v28 & 2) != 0 )
          {
            if ( (v28 & 0x40) != 0 )
            {
              *(_DWORD *)(v27 + 88) = 0;
              *(_BYTE *)(v27 + 104) = v28 & 0xBF;
            }
            Components::Animations::Sequence::Calculate(*(Components::Animations::Sequence **)(v27 + 16));
            v29 = *(_QWORD *)(v27 + 16);
            if ( (*(_BYTE *)(v29 + 264) & 3) == 1 )
            {
              if ( *(_BYTE *)(v29 + 229) )
              {
                *(_BYTE *)(v27 + 104) |= 0x40u;
                v37 = *(_DWORD *)(v27 + 52);
                if ( v37 >= 0 )
                {
                  if ( v37 <= 0 )
                  {
                    *(_BYTE *)(v27 + 104) = *(_BYTE *)(v27 + 104) & 0xED | 0x10;
                    v38 = *(_QWORD *)(v27 + 96);
                    v39 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v38 + 64LL);
                    if ( v39 == CKeyframeAnimation::OnAnimationEvent )
                      CKeyframeAnimation::OnAnimationEvent(v38, 1);
                    else
                      v39(v38, 1);
                    goto LABEL_40;
                  }
                  *(_DWORD *)(v27 + 52) = v37 - 1;
                }
                Components::Animations::Animation::PrepareSequenceForIteration(
                  (Components::Animations::Animation *)v27,
                  ++*(_DWORD *)(v27 + 44));
                Components::Animations::Sequence::Repeat(*(Components::Animations::Sequence **)(v27 + 16));
              }
            }
          }
LABEL_40:
          v30 = *(_BYTE *)(v27 + 104);
          if ( (v30 & 0x18) == 0x18 )
            *(_BYTE *)(v27 + 104) = v30 | 0x20;
          v4 = Components::Animations::Animation::Commit(*((Components::Animations::Animation **)this + 48));
          v5 = v4;
          if ( v4 < 0 )
          {
            v48 = 1237;
            goto LABEL_95;
          }
LABEL_43:
          if ( v12 )
            Components::Animations::Animation::ApiPause(*((Components::Animations::Animation **)this + 48));
          v31 = *((_QWORD *)this + 48);
          if ( (*(_BYTE *)(v31 + 104) & 0x10) == 0 )
          {
            if ( (*(_BYTE *)(v31 + 104) & 4) != 0 && *(_DWORD *)(v31 + 36) < *(_DWORD *)(v31 + 32) )
            {
              v5 = 1;
              goto LABEL_12;
            }
LABEL_11:
            v5 = 0;
            goto LABEL_12;
          }
          --*((_DWORD *)a2 + 4);
          v4 = Components::Animations::Animation::ApiReset(*((Components::Animations::Animation **)this + 48), 1);
          v5 = v4;
          if ( v4 >= 0 )
          {
            v40 = (*((_BYTE *)this + 452) & 1) == 0;
            *(_QWORD *)((char *)this + 444) = 0LL;
            if ( !v40 )
            {
              --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 168LL) + 96LL);
              *((_BYTE *)this + 452) &= ~1u;
            }
            goto LABEL_11;
          }
          v48 = 1256;
LABEL_95:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v48);
          goto LABEL_12;
        }
      }
      *((_BYTE *)this + 452) |= 4u;
    }
    v5 = 0;
    goto LABEL_35;
  }
  if ( !*((_BYTE *)this + 196) )
  {
LABEL_74:
    v5 = 1;
    goto LABEL_12;
  }
  v54 = 18;
  v50 = 0uLL;
  v51 = 0uLL;
  v52 = 0uLL;
  v53 = 0uLL;
  CExpressionValue::CopyFrom((CExpressionValue *)&v50, (CKeyframeAnimation *)((char *)this + 128));
  v8 = *((_DWORD *)a2 + 4);
  if ( v8 == -1 )
  {
    v49 = 201;
  }
  else
  {
    if ( *((_DWORD *)a2 + 12) != v8 )
    {
      v9 = *((_QWORD *)a2 + 3);
      *((_DWORD *)a2 + 4) = v8 + 1;
      if ( v54 == 18 )
      {
        *(_DWORD *)(v9 + 72LL * v8) = v50;
        *(_DWORD *)(v9 + 72LL * v8 + 64) = 18;
LABEL_10:
        *(_BYTE *)(v9 + 72LL * v8 + 68) = 1;
      }
      else
      {
        switch ( v54 )
        {
          case 17:
            *(_BYTE *)(v9 + 72LL * v8) = v50;
            *(_DWORD *)(v9 + 72LL * v8 + 64) = 17;
            goto LABEL_10;
          case 35:
            *(_QWORD *)(v9 + 72LL * v8) = v50;
            *(_DWORD *)(v9 + 72LL * v8 + 64) = 35;
            goto LABEL_10;
          case 52:
            v43 = DWORD2(v50);
            *(_QWORD *)(v9 + 72LL * v8) = v50;
            *(_DWORD *)(v9 + 72LL * v8 + 8) = v43;
            *(_DWORD *)(v9 + 72LL * v8 + 64) = 52;
            goto LABEL_10;
          case 69:
            *(_OWORD *)(v9 + 72LL * v8) = v50;
            *(_DWORD *)(v9 + 72LL * v8 + 64) = 69;
            goto LABEL_10;
          case 70:
            *(_OWORD *)(v9 + 72LL * v8) = v50;
            *(_DWORD *)(v9 + 72LL * v8 + 64) = 70;
            goto LABEL_10;
          case 71:
            *(_OWORD *)(v9 + 72LL * v8) = v50;
            *(_DWORD *)(v9 + 72LL * v8 + 64) = 71;
            goto LABEL_10;
          case 104:
            v44 = v51;
            *(_OWORD *)(v9 + 72LL * v8) = v50;
            *(_DWORD *)(v9 + 72LL * v8 + 64) = 104;
            *(_QWORD *)(v9 + 72LL * v8 + 16) = v44;
            goto LABEL_10;
          case 265:
            v45 = v51;
            *(_OWORD *)(v9 + 72LL * v8) = v50;
            *(_DWORD *)(v9 + 72LL * v8 + 64) = 265;
            v46 = v52;
            *(_OWORD *)(v9 + 72LL * v8 + 16) = v45;
            v47 = v53;
            *(_OWORD *)(v9 + 72LL * v8 + 32) = v46;
            *(_OWORD *)(v9 + 72LL * v8 + 48) = v47;
            goto LABEL_10;
          default:
            goto LABEL_11;
        }
      }
      goto LABEL_11;
    }
    v49 = 214;
  }
  v5 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v49);
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2A6u);
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x506u);
LABEL_12:
  v10 = *((_BYTE *)this + 452);
  *((_QWORD *)this + 50) = 0LL;
  if ( (v10 & 2) != 0 )
    *((_BYTE *)this + 452) = v10 & 0xFD;
  return (unsigned int)v5;
}
