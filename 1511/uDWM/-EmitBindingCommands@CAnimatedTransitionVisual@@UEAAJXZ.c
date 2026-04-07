/*
 * XREFs of ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18000C200
 * Callers:
 *     <none>
 * Callees:
 *     ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@II@Z @ 0x18000C14C (-_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@II@Z.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000C5A8 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SendWithData@CResource@@QEAAJPEAXI0I@Z @ 0x180012270 (-SendWithData@CResource@@QEAAJPEAXI0I@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 *     Template_ddqqqqqqp @ 0x18008E578 (Template_ddqqqqqqp.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::EmitBindingCommands(CResource **this)
{
  int v2; // eax
  int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  CResource *v6; // rcx
  int v7; // eax
  CResource *v8; // rcx
  int v9; // eax
  CResource *v10; // rcx
  double v11; // xmm0_8
  int v12; // eax
  CResource *v13; // rax
  int v14; // eax
  CResource *v15; // rax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  CResource *v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  CResource *v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  CResource *v31; // rax
  _BYTE v32[28]; // [rsp+68h] [rbp+7h] BYREF
  int v33; // [rsp+84h] [rbp+23h]
  __int64 v34; // [rsp+90h] [rbp+2Fh] BYREF
  int v35; // [rsp+98h] [rbp+37h]

  v2 = CAnimatedTransitionVisual::_EnsureDCompResources((CAnimatedTransitionVisual *)this);
  LOBYTE(v3) = 0;
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x795u);
  }
  else
  {
    v5 = 0;
    v34 = 0LL;
    v35 = 0;
    if ( this[75] || this[76] )
    {
      v6 = this[84];
      *(_DWORD *)v32 = 246;
      memset(&v32[4], 0, 20);
      v7 = CResource::Send(v6, v32, 0x18u);
      v4 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x7A4u);
        return v4;
      }
      v5 = 1;
      LODWORD(v34) = *((_DWORD *)this[84] + 6);
    }
    if ( this[77] || this[78] )
    {
      *(_DWORD *)v32 = 247;
      memset_0(&v32[4], 0, 0x24uLL);
      v25 = this[83];
      *(_OWORD *)&v32[8] = _xmm;
      v26 = CResource::Send(v25, v32, 0x28u);
      v4 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x7AFu);
        return v4;
      }
      v27 = v5++;
      *((_DWORD *)&v34 + v27) = *((_DWORD *)this[83] + 6);
    }
    if ( this[79] || this[80] )
    {
      v28 = this[85];
      *(_DWORD *)v32 = 248;
      memset(&v32[4], 0, 24);
      v33 = 0;
      v29 = CResource::Send(v28, v32, 0x20u);
      v4 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x7B8u);
        return v4;
      }
      v30 = v5++;
      *((_DWORD *)&v34 + v30) = *((_DWORD *)this[85] + 6);
    }
    v8 = this[86];
    *(_QWORD *)v32 = _mm_load_si128((const __m128i *)&_xmm).m128i_u64[0];
    *(_DWORD *)&v32[12] = 0;
    *(_DWORD *)&v32[8] = 4 * v5;
    v9 = CResource::SendWithData(v8, v32, 0x10u, &v34, 4 * v5);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x7C3u);
    }
    else
    {
      v10 = this[82];
      v11 = *((float *)this + 228);
      *(_DWORD *)&v32[16] = 0;
      *(_QWORD *)v32 = 161LL;
      *(_DWORD *)&v32[20] = 0;
      *(double *)&v32[8] = v11;
      v12 = CResource::Send(v10, v32, 0x18u);
      v4 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x7C9u);
      }
      else
      {
        *(_DWORD *)v32 = 48;
        *(_QWORD *)&v32[4] = 0LL;
        v13 = this[89];
        *(_DWORD *)&v32[8] = *((_DWORD *)this[82] + 6);
        v14 = CResource::Send(*((CResource **)v13 + 2), v32, 0xCu);
        v4 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x7CFu);
        }
        else
        {
          *(_DWORD *)v32 = 46;
          *(_QWORD *)&v32[4] = 0LL;
          v15 = this[89];
          *(_DWORD *)&v32[8] = *((_DWORD *)this[86] + 6);
          v16 = CResource::Send(*((CResource **)v15 + 2), v32, 0xCu);
          v4 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x7D5u);
          }
          else
          {
            v17 = CAnimatedTransitionVisual::_BindIfPresent((__int64)this, 0, *((_DWORD *)this[84] + 6), 0);
            v4 = v17;
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x7D8u);
            }
            else
            {
              v18 = CAnimatedTransitionVisual::_BindIfPresent((__int64)this, 1, *((_DWORD *)this[84] + 6), 1u);
              v4 = v18;
              if ( v18 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x7D9u);
              }
              else
              {
                v19 = CAnimatedTransitionVisual::_BindIfPresent((__int64)this, 2, *((_DWORD *)this[83] + 6), 0);
                v4 = v19;
                if ( v19 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x7DAu);
                }
                else
                {
                  v20 = CAnimatedTransitionVisual::_BindIfPresent((__int64)this, 3, *((_DWORD *)this[83] + 6), 1u);
                  v4 = v20;
                  if ( v20 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x7DBu);
                  }
                  else
                  {
                    v21 = CAnimatedTransitionVisual::_BindIfPresent((__int64)this, 4, *((_DWORD *)this[85] + 6), 1u);
                    v4 = v21;
                    if ( v21 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x7DCu);
                    }
                    else
                    {
                      v22 = CAnimatedTransitionVisual::_BindIfPresent((__int64)this, 5, *((_DWORD *)this[85] + 6), 2u);
                      v4 = v22;
                      if ( v22 < 0 )
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x7DDu);
                      }
                      else
                      {
                        v23 = CAnimatedTransitionVisual::_BindIfPresent((__int64)this, 6, *((_DWORD *)this[82] + 6), 0);
                        v4 = v23;
                        if ( v23 < 0 )
                        {
                          MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x7DEu);
                        }
                        else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                        {
                          v31 = this[3];
                          if ( v31 )
                            v3 = *((_DWORD *)v31 + 6);
                          Template_ddqqqqqqp(
                            *((_QWORD *)this[3] + 2),
                            *((_DWORD *)this[85] + 6),
                            *((_DWORD *)this + 180),
                            *((_DWORD *)this + 181),
                            v3,
                            *((_DWORD *)this[82] + 6),
                            *((_DWORD *)this[86] + 6),
                            *((_DWORD *)this[84] + 6),
                            *((_DWORD *)this[83] + 6),
                            *((_DWORD *)this[85] + 6),
                            *((_QWORD *)this[3] + 2));
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v4;
}
