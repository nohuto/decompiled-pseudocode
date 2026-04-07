/*
 * XREFs of ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800135E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@IW4Enum@DwmResourceProperty@@@Z @ 0x1800134C0 (-_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@IW4Enum@DwmResourcePro.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180013968 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     Template_ddqqqqqqp @ 0x18008D524 (Template_ddqqqqqqp.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::EmitBindingCommands(CAnimatedTransitionVisual *this)
{
  int v2; // eax
  int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  int v6; // eax
  int v7; // eax
  __int64 v8; // r8
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // [rsp+20h] [rbp-78h]
  __int64 v26; // [rsp+60h] [rbp-38h] BYREF
  int v27; // [rsp+68h] [rbp-30h]

  v2 = CAnimatedTransitionVisual::_EnsureDCompResources(this);
  LOBYTE(v3) = 0;
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x79Au);
  }
  else
  {
    v5 = 0;
    v26 = 0LL;
    v27 = 0;
    if ( *((_QWORD *)this + 75) || *((_QWORD *)this + 76) )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 84) + 16LL) + 1088LL))(
             *(_QWORD *)(*((_QWORD *)this + 84) + 16LL),
             *(unsigned int *)(*((_QWORD *)this + 84) + 24LL));
      v4 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x7ABu);
        return v4;
      }
      v5 = 1;
      LODWORD(v26) = *(_DWORD *)(*((_QWORD *)this + 84) + 24LL);
    }
    if ( *((_QWORD *)this + 77) || *((_QWORD *)this + 78) )
    {
      HIDWORD(v25) = 0;
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 83) + 16LL) + 1096LL))(
              *(_QWORD *)(*((_QWORD *)this + 83) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 83) + 24LL));
      v4 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x7B8u);
        return v4;
      }
      v21 = v5++;
      *((_DWORD *)&v26 + v21) = *(_DWORD *)(*((_QWORD *)this + 83) + 24LL);
    }
    if ( *((_QWORD *)this + 79) || *((_QWORD *)this + 80) )
    {
      HIDWORD(v25) = 0;
      v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 85) + 16LL) + 1104LL))(
              *(_QWORD *)(*((_QWORD *)this + 85) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 85) + 24LL));
      v4 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x7C4u);
        return v4;
      }
      v23 = v5++;
      *((_DWORD *)&v26 + v23) = *(_DWORD *)(*((_QWORD *)this + 85) + 24LL);
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 86) + 16LL)
                                                                      + 1080LL))(
           *(_QWORD *)(*((_QWORD *)this + 86) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 86) + 24LL),
           &v26,
           v5);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x7CCu);
    }
    else
    {
      LODWORD(v25) = 0;
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 82)
                                                                                             + 16LL)
                                                                               + 944LL))(
             *(_QWORD *)(*((_QWORD *)this + 82) + 16LL),
             *(unsigned int *)(*((_QWORD *)this + 82) + 24LL),
             v8,
             0LL,
             v25);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x7D2u);
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 89) + 16LL)
                                                                              + 16LL)
                                                                + 360LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 89) + 16LL) + 16LL),
                *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 89) + 16LL) + 24LL),
                *(unsigned int *)(*((_QWORD *)this + 82) + 24LL));
        v4 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x7D6u);
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 89)
                                                                                            + 16LL)
                                                                                + 16LL)
                                                                  + 352LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 89) + 16LL) + 16LL),
                  *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 89) + 16LL) + 24LL),
                  *(unsigned int *)(*((_QWORD *)this + 86) + 24LL));
          v4 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x7DAu);
          }
          else
          {
            v12 = CAnimatedTransitionVisual::_BindIfPresent(
                    (__int64)this,
                    0,
                    *(_DWORD *)(*((_QWORD *)this + 84) + 24LL),
                    5u);
            v4 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x7DCu);
            }
            else
            {
              v13 = CAnimatedTransitionVisual::_BindIfPresent(
                      (__int64)this,
                      1,
                      *(_DWORD *)(*((_QWORD *)this + 84) + 24LL),
                      6u);
              v4 = v13;
              if ( v13 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x7DDu);
              }
              else
              {
                v14 = CAnimatedTransitionVisual::_BindIfPresent(
                        (__int64)this,
                        2,
                        *(_DWORD *)(*((_QWORD *)this + 83) + 24LL),
                        3u);
                v4 = v14;
                if ( v14 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x7DEu);
                }
                else
                {
                  v15 = CAnimatedTransitionVisual::_BindIfPresent(
                          (__int64)this,
                          3,
                          *(_DWORD *)(*((_QWORD *)this + 83) + 24LL),
                          4u);
                  v4 = v15;
                  if ( v15 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x7DFu);
                  }
                  else
                  {
                    v16 = CAnimatedTransitionVisual::_BindIfPresent(
                            (__int64)this,
                            4,
                            *(_DWORD *)(*((_QWORD *)this + 85) + 24LL),
                            1u);
                    v4 = v16;
                    if ( v16 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x7E0u);
                    }
                    else
                    {
                      v17 = CAnimatedTransitionVisual::_BindIfPresent(
                              (__int64)this,
                              5,
                              *(_DWORD *)(*((_QWORD *)this + 85) + 24LL),
                              2u);
                      v4 = v17;
                      if ( v17 < 0 )
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x7E1u);
                      }
                      else
                      {
                        v18 = CAnimatedTransitionVisual::_BindIfPresent(
                                (__int64)this,
                                6,
                                *(_DWORD *)(*((_QWORD *)this + 82) + 24LL),
                                0);
                        v4 = v18;
                        if ( v18 < 0 )
                        {
                          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x7E2u);
                        }
                        else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                        {
                          v24 = *((_QWORD *)this + 3);
                          if ( v24 )
                            v3 = *(_DWORD *)(v24 + 24);
                          Template_ddqqqqqqp(
                            *(_QWORD *)(*((_QWORD *)this + 3) + 16LL),
                            *(_DWORD *)(*((_QWORD *)this + 85) + 24LL),
                            *((_DWORD *)this + 180),
                            *((_DWORD *)this + 181),
                            v3,
                            *(_DWORD *)(*((_QWORD *)this + 82) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this + 86) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this + 84) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this + 83) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this + 85) + 24LL),
                            *(_QWORD *)(*((_QWORD *)this + 3) + 16LL));
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
