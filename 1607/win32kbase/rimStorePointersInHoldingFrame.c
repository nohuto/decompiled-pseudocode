/*
 * XREFs of rimStorePointersInHoldingFrame @ 0x1C00DA2AC
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C00D9824 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1C000D35C (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     rimFindHoldingFrame @ 0x1C000D380 (rimFindHoldingFrame.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 *     ListTableIteratorNext @ 0x1C007B5B4 (ListTableIteratorNext.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00D23C0 (WPP_RECORDER_SF_dd.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C00E1120 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmGetButtonContact @ 0x1C00E12F8 (RIMCmGetButtonContact.c)
 */

__int64 __fastcall rimStorePointersInHoldingFrame(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rsi
  __int64 v6; // rdi
  _QWORD *HoldingFrame; // rbx
  unsigned int v9; // ecx
  void *v10; // rdx
  __int64 v11; // rax
  _OWORD *v12; // rdx
  _OWORD *v13; // rdx
  __int64 **active; // rax
  __int64 v15; // rsi
  __int64 *v16; // xmm1_8
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // r11
  _OWORD *v20; // r8
  _OWORD *v21; // rdx
  char *v22; // rdx
  __int128 v23; // [rsp+48h] [rbp+7h] BYREF
  __int64 *v24; // [rsp+58h] [rbp+17h]
  __int128 v25; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v26; // [rsp+70h] [rbp+2Fh]
  __int128 v27; // [rsp+78h] [rbp+37h] BYREF
  __int64 v28; // [rsp+88h] [rbp+47h]

  v4 = *(_QWORD *)(a2 + 480);
  v6 = a3;
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !HoldingFrame )
    return 0LL;
  if ( (_DWORD)v6 && (v9 = 168 * v6, (unsigned __int64)(168 * v6) <= 0xFFFFFFFF) && v9 )
    v10 = Win32AllocPoolZInit(v9);
  else
    v10 = 0LL;
  HoldingFrame[9] = v10;
  if ( !v10 )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      3,
      5,
      47,
      (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids);
    return 0LL;
  }
  *((_DWORD *)HoldingFrame + 10) = v6;
  if ( a4 )
  {
    v11 = RIMCmGetButtonContact(v4) + 2376;
    if ( (*(_DWORD *)(v11 + 28) & 0x2000) != 0 )
      HoldingFrame[10] = v12;
    *v12 = *(_OWORD *)v11;
    v12[1] = *(_OWORD *)(v11 + 16);
    v12[2] = *(_OWORD *)(v11 + 32);
    v12[3] = *(_OWORD *)(v11 + 48);
    v12[4] = *(_OWORD *)(v11 + 64);
    v12[5] = *(_OWORD *)(v11 + 80);
    v12[6] = *(_OWORD *)(v11 + 96);
    v13 = v12 + 8;
    *(v13 - 1) = *(_OWORD *)(v11 + 112);
    *v13 = *(_OWORD *)(v11 + 128);
    v13[1] = *(_OWORD *)(v11 + 144);
    *((_QWORD *)v13 + 4) = *(_QWORD *)(v11 + 160);
    *((_DWORD *)HoldingFrame + 11) = 1;
  }
  else
  {
    active = (__int64 **)RIMCmActiveContactsBeginNoButton(&v27, v4);
    v15 = v4 + 1552;
    while ( 1 )
    {
      v16 = active[2];
      v17 = *(_OWORD *)active;
      DWORD2(v25) = *(_DWORD *)(v15 + 8);
      v18 = *(_QWORD *)v15 + 16LL * DWORD2(v25);
      v23 = v17;
      v26 = v18;
      v24 = v16;
      *(_QWORD *)&v25 = v15;
      v28 = v18;
      v27 = v25;
      if ( !tagLIST_TABLE_ITERATOR::operator!=((__int64)&v23, (__int64)&v27) )
        break;
      v20 = v24 + 295;
      if ( (v24[288] & 1) != 0 )
      {
        if ( (*((_DWORD *)v24 + 597) & 0x2000) != 0 )
          HoldingFrame[10] = HoldingFrame[9] + 168LL * *((unsigned int *)HoldingFrame + 11);
        v21 = (_OWORD *)(HoldingFrame[9] + 168LL * *((unsigned int *)HoldingFrame + 11));
        *v21 = *v20;
        v21[1] = v20[1];
        v21[2] = v20[2];
        v21[3] = v20[3];
        v21[4] = v20[4];
        v21[5] = v20[5];
        v21[6] = v20[6];
        v22 = (char *)v21 + v19;
        *((_OWORD *)v22 - 1) = v20[7];
        *(_OWORD *)v22 = *(_OWORD *)((char *)v20 + v19);
        *((_OWORD *)v22 + 1) = *(_OWORD *)((char *)v20 + v19 + 16);
        *((_QWORD *)v22 + 4) = *(_QWORD *)((char *)v20 + v19 + 32);
        ++*((_DWORD *)HoldingFrame + 11);
      }
      active = ListTableIteratorNext((__int64 **)&v25, (__int64)&v23);
    }
  }
  if ( *((_DWORD *)HoldingFrame + 11) != *((_DWORD *)HoldingFrame + 10) )
  {
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      5u,
      0x30u,
      (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids,
      *((_DWORD *)HoldingFrame + 11),
      *((_DWORD *)HoldingFrame + 10));
    return 0LL;
  }
  return 1LL;
}
