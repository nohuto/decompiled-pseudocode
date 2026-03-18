/*
 * XREFs of xxxCallHandleMenuMessages @ 0x140269B80
 * Callers:
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxMNDragOver @ 0x1402F97D8 (xxxMNDragOver.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxHandleMenuMessages @ 0x14005B450 (xxxHandleMenuMessages.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNEndMenuState @ 0x140177ED0 (xxxMNEndMenuState.c)
 *     xxxEndMenuLoop @ 0x14028CF70 (xxxEndMenuLoop.c)
 *     MNCheckButtonDownState @ 0x1402D9304 (MNCheckButtonDownState.c)
 */

__int64 __fastcall xxxCallHandleMenuMessages(_QWORD *a1, __int64 *a2, int a3, __int64 a4, unsigned __int64 a5)
{
  int v5; // r10d
  __int64 v10; // rdx
  unsigned int v11; // edi
  int v12; // edx
  _QWORD v14[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+38h] [rbp-28h]
  int v17; // [rsp+3Ch] [rbp-24h]
  __int64 v18; // [rsp+40h] [rbp-20h]
  unsigned __int64 v19; // [rsp+48h] [rbp-18h]
  __int128 v20; // [rsp+50h] [rbp-10h]

  v5 = *((_DWORD *)a1 + 2);
  v17 = 0;
  v20 = 0LL;
  if ( (v5 & 0x4008) == 0x4008 )
  {
    MNCheckButtonDownState(a1);
    v5 = *((_DWORD *)a1 + 2);
  }
  if ( a2 )
    v15 = *a2;
  else
    v15 = 0LL;
  v16 = a3;
  v18 = a4;
  if ( (unsigned int)(a3 - 512) > 0xE )
    v19 = a5;
  else
    v19 = (unsigned __int16)(*(_WORD *)(a2[5] + 104) + a5) | (unsigned __int64)(int)((*(_DWORD *)(a2[5] + 108) << 16)
                                                                                   + (a5 & 0xFFFF0000));
  v10 = *a1;
  *((_DWORD *)a1 + 2) = v5 | 0x200;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v14, v10);
  v11 = xxxHandleMenuMessages((__int64)&v15, (__int64)a1, v14);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v14);
  v12 = *((_DWORD *)a1 + 2);
  *((_DWORD *)a1 + 2) = v12 & 0xFFFFFDFF;
  if ( v11 && (v12 & 0x100) != 0 && ((v12 & 4) == 0 || (*(_DWORD *)*a1 & 0x8000) != 0) )
  {
    xxxEndMenuLoop(a1, *a1);
    xxxMNEndMenuState(a1);
  }
  return v11;
}
