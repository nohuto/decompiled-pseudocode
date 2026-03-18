/*
 * XREFs of ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00C7020
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0065BC0 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031C50 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0031D10 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     HmgSafeNextObjt @ 0x1C006B3F0 (HmgSafeNextObjt.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C00CA318 (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 */

void __fastcall DrvTransferGdiObjects(struct SURFACE **a1, HDEV a2)
{
  _QWORD *v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rsi
  __int64 Objt; // rax
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rsi
  __int64 *v13; // rax
  __int64 v14; // rcx
  struct SURFACE **v15; // [rsp+30h] [rbp+8h] BYREF
  struct _LIST_ENTRY *v16; // [rsp+38h] [rbp+10h] BYREF

  v4 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v4[3] = a1;
  v4[4] = a2;
  v4[5] = 15LL;
  WdLogEvent5_WdEvent(v4);
  v15 = a1;
  v16 = (struct _LIST_ENTRY *)a2;
  GreAcquireHmgrSemaphore(v6, v5, v7);
  LODWORD(v8) = 0;
  while ( 1 )
  {
    Objt = HmgSafeNextObjt(v8, 1);
    if ( !Objt )
      break;
    v8 = *(_QWORD *)Objt;
    if ( *(HDEV *)(Objt + 48) == a2 )
    {
      *(_DWORD *)(Objt + 36) &= ~0x2000u;
      *(_QWORD *)(Objt + 48) = a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v15);
      PDEVOBJ::vUnreferencePdev(&v16, 0);
    }
  }
  LODWORD(v10) = 0;
  while ( 1 )
  {
    v11 = (__int64 *)HmgSafeNextObjt(v10, 5);
    if ( !v11 )
      break;
    v10 = *v11;
    if ( (HDEV)v11[6] == a2 )
      v11[6] = (__int64)a1;
  }
  LODWORD(v12) = 0;
  while ( 1 )
  {
    v13 = (__int64 *)HmgSafeNextObjt(v12, 28);
    if ( !v13 )
      break;
    v12 = *v13;
    if ( (HDEV)v13[5] == a2 )
    {
      v13[5] = (__int64)a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v15);
      PDEVOBJ::vUnreferencePdev(&v16, 0);
    }
  }
  vTransferWndObjs(a1[322], a2, (HDEV)a1);
  GreReleaseHmgrSemaphore(v14);
}
