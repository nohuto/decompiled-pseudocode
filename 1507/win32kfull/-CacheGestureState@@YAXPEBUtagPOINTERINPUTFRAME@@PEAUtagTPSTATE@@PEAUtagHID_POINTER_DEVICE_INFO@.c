/*
 * XREFs of ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01F0DE4
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F4EA4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F1114 (-CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?FindOrAssignPrimary@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F12C4 (-FindOrAssignPrimary@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUta.c)
 *     ?FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01F1330 (-FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVI.c)
 *     ?FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01F1474 (-FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_D.c)
 *     ?HitTestTPPrimaryContact@@YAXPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@@Z @ 0x1C01F187C (-HitTestTPPrimaryContact@@YAXPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@@Z.c)
 *     ?CopyTPPointerInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@PEAX@Z @ 0x1C022EDBC (-CopyTPPointerInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@PEAX@Z.c)
 */

void __fastcall CacheGestureState(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagTPSTATE *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        void *a4)
{
  struct tagPOINTERINPUTFRAME *v8; // rbp
  struct tagHID_POINTER_DEVICE_INFO *v9; // r8
  struct tagPOINTERINFONODE *v10; // rax
  struct tagPOINTERINFONODE *v11; // rsi
  unsigned int v12; // r14d
  __int64 i; // rbx
  unsigned __int16 v14; // ax
  unsigned int v15; // edx
  __int64 v16; // r15
  _QWORD *v17; // rax
  __int64 v18; // rdx

  EtwTraceCopyPointerInputFrameStart();
  v8 = CopyTPPointerInputFrame(a1, a4);
  EtwTraceCopyPointerInputFrameStop();
  if ( v8 )
  {
    *((_QWORD *)a2 + 157) = v8;
    v10 = FindOrAssignPrimary(v8, a2, v9);
    v11 = v10;
    if ( v10 )
    {
      if ( (*((_DWORD *)a2 + 316) & 0x400) != 0 )
        *((_DWORD *)v10 + 17) |= 0x2000u;
      FixupPrimaryGestureContact(v10, (unsigned int)*((unsigned __int16 *)v10 + 24) % *((_DWORD *)a2 + 267), a2, a3, 1);
      HitTestTPPrimaryContact(v11, a2);
      v12 = 0;
      for ( i = *((_QWORD *)v8 + 9); v12 < *((_DWORD *)v8 + 6); ++v12 )
      {
        v14 = *(_WORD *)(i + 48);
        if ( v14 )
        {
          v15 = (unsigned int)v14 % *((_DWORD *)a2 + 267);
          v16 = v15;
          if ( (struct tagPOINTERINFONODE *)i != v11 )
          {
            FixupSecondaryGestureContacts((struct tagPOINTERINFONODE *)i, v15, a2, a3, 1);
            if ( (*(_DWORD *)(i + 68) & 0x40000) != 0 )
              *(_DWORD *)(i + 68) = 0;
          }
          v17 = (_QWORD *)*((_QWORD *)a2 + 136);
          if ( v17 )
            v17 = (_QWORD *)*v17;
          *(_QWORD *)(i + 24) = v17;
          v18 = 176 * v16;
          *(_DWORD *)((char *)a2 + v18 + 168) |= 0x40u;
          *(_QWORD *)((char *)a2 + v18 + 32) = *(_QWORD *)(216LL * v12 + *((_QWORD *)a1 + 9) + 96);
        }
        i += 216LL;
      }
    }
    else
    {
      CleanupGestureCache(a2, 0);
    }
  }
}
