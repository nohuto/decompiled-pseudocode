/*
 * XREFs of ?ProcessDragContinue@PTPProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18005BB94
 * Callers:
 *     ?OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005B680 (-OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?DeliverMouseMessage@PTPProcessor@@AEAAJPEAUInputInfo@@G_N@Z @ 0x18005BFE8 (-DeliverMouseMessage@PTPProcessor@@AEAAJPEAUInputInfo@@G_N@Z.c)
 *     ?DeliverTouchpadGestureMessage@PTPProcessor@@AEAAJPEAUInputInfo@@_N1@Z @ 0x18005C0D0 (-DeliverTouchpadGestureMessage@PTPProcessor@@AEAAJPEAUInputInfo@@_N1@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

__int64 __fastcall PTPProcessor::ProcessDragContinue(PTPProcessor *this, struct InputInfo *a2)
{
  int v3; // eax
  __int64 v4; // r8
  struct InputInfo *v5; // rax
  _OWORD *v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // edi
  int v22; // r9d
  _BYTE v24[1888]; // [rsp+30h] [rbp-778h] BYREF

  if ( (unsigned int)(*((_DWORD *)this + 151) - 1) <= 1 )
  {
    v19 = PTPProcessor::DeliverMouseMessage(this, a2, 0, 0);
    v21 = v19;
    if ( v19 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v22 = 499;
      goto LABEL_21;
    }
  }
  else
  {
    if ( *((_DWORD *)this + 154) == 1 )
    {
      v3 = *((_DWORD *)a2 + 2);
      if ( *((_BYTE *)this + 621) )
      {
        if ( (unsigned int)(v3 - *((_DWORD *)this + 156)) >= 0x64 )
        {
          v4 = 14LL;
          *((_BYTE *)this + 621) = 0;
          v5 = a2;
          v6 = v24;
          do
          {
            v7 = *((_OWORD *)v5 + 1);
            *v6 = *(_OWORD *)v5;
            v8 = *((_OWORD *)v5 + 2);
            v6[1] = v7;
            v9 = *((_OWORD *)v5 + 3);
            v6[2] = v8;
            v10 = *((_OWORD *)v5 + 4);
            v6[3] = v9;
            v11 = *((_OWORD *)v5 + 5);
            v6[4] = v10;
            v12 = *((_OWORD *)v5 + 6);
            v6[5] = v11;
            v13 = *((_OWORD *)v5 + 7);
            v5 = (struct InputInfo *)((char *)v5 + 128);
            v6[6] = v12;
            v6 += 8;
            *(v6 - 1) = v13;
            --v4;
          }
          while ( v4 );
          v14 = *((_OWORD *)v5 + 1);
          *v6 = *(_OWORD *)v5;
          v15 = *((_OWORD *)v5 + 2);
          v6[1] = v14;
          v16 = *((_OWORD *)v5 + 3);
          v6[2] = v15;
          v17 = *((_OWORD *)v5 + 4);
          v6[3] = v16;
          v18 = *((_OWORD *)v5 + 5);
          v6[4] = v17;
          v6[5] = v18;
          v19 = PTPProcessor::DeliverTouchpadGestureMessage(this, a2, 1, 0);
          v21 = v19;
          if ( v19 >= 0 )
          {
            *((_DWORD *)this + 151) = 1;
            v19 = PTPProcessor::DeliverMouseMessage(this, (struct InputInfo *)v24, 0, 1);
            v21 = v19;
            if ( v19 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              return v21;
            v22 = 550;
          }
          else
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              return v21;
            v22 = 547;
          }
LABEL_21:
          Template_qqq(v20, &MinInput_Warning_CheckResult, 11, v22, v19);
          return v21;
        }
      }
      else
      {
        *((_DWORD *)this + 156) = v3;
        *((_BYTE *)this + 621) = 1;
      }
    }
    else
    {
      *((_BYTE *)this + 621) = 0;
    }
    v19 = PTPProcessor::DeliverTouchpadGestureMessage(this, a2, 0, 0);
    v21 = v19;
    if ( v19 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v22 = 540;
      goto LABEL_21;
    }
  }
  return v21;
}
