/*
 * XREFs of HDEV_DeleteRfontsAndUnloadDeviceFonts @ 0x140105ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@AEAI@Z @ 0x1400FDD9C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@AEAI@Z.c)
 *     ??$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FE100 (--$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140105CD0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z @ 0x14028B4D4 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z.c)
 */

__int64 __fastcall HDEV_DeleteRfontsAndUnloadDeviceFonts(HDEV a1, __int64 a2)
{
  int v2; // edi
  int v4; // esi
  HDEV v5; // rcx
  _QWORD *v6; // rcx
  HDEV v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 SessionState; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  struct PFF *v16; // rax
  _QWORD v18[2]; // [rsp+20h] [rbp-30h] BYREF
  _OWORD v19[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+70h] [rbp+20h] BYREF

  v2 = 0;
  LODWORD(v20) = 0;
  v4 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = 0;
  memset(v19, 0, sizeof(v19));
  PushThreadGuardedObject(v19, a2, vUnreferencePdevWorker);
  while ( 1 )
  {
    if ( ((_DWORD)a1[10] & 0x800000) != 0 )
    {
      v5 = (HDEV)*((_QWORD *)a1 + 439);
      v2 |= 1u;
    }
    else
    {
      v5 = a1;
    }
    v6 = v5 + 384;
    if ( (v2 & 1) != 0 )
      v2 &= ~1u;
    if ( (_QWORD *)*v6 == v6 )
      break;
    if ( ((_DWORD)a1[10] & 0x800000) != 0 )
    {
      v7 = (HDEV)*((_QWORD *)a1 + 439);
      v2 |= 2u;
    }
    else
    {
      v7 = a1;
    }
    if ( (v2 & 2) != 0 )
      v2 &= ~2u;
    v20 = *((_QWORD *)v7 + 192) - 672LL;
    v18[0] = *(_QWORD *)(v20 + 128);
    RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v20, a1, (struct PFFOBJ *)v18, v4);
    v20 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v20);
  }
  PopThreadGuardedObject(v19);
  if ( !*((_DWORD *)a1 + 887) )
    return 1LL;
  SessionState = W32GetSessionState(v9, v8, v10);
  GreAcquireSemaphore<17,>(*(_QWORD *)(SessionState + 96) + 4864LL);
  v15 = W32GetSessionState(v13, v12, v14);
  LODWORD(v20) = 0;
  v18[0] = *(_QWORD *)(*(_QWORD *)(v15 + 96) + 20400LL);
  v16 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)v18, (unsigned __int64)a1, (unsigned int *)&v20);
  return PFTOBJ::bUnloadWorkhorse((PFTOBJ *)v18, v16, v20, 0);
}
