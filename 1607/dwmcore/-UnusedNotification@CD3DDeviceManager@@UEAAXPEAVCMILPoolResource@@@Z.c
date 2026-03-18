/*
 * XREFs of ?UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180034D80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800B59AC (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x1801130A8 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 */

void __fastcall CD3DDeviceManager::UnusedNotification(CD3DDeviceManager *this, struct CMILPoolResource *a2)
{
  __int64 v4; // rdx
  int *v5; // r8
  unsigned __int64 CurrentFrameId; // rax
  struct CCrossThreadComposition *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  char *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 276) )
  {
    v10 = (char *)this + 24;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
    if ( a2 )
      a2 = (struct CMILPoolResource *)((char *)a2 - 408);
    LODWORD(v4) = *((_DWORD *)this + 42);
    if ( (_DWORD)v4 )
    {
      while ( 1 )
      {
        v4 = (unsigned int)(v4 - 1);
        v5 = *(int **)(*((_QWORD *)this + 18) + 40 * v4);
        if ( v5 == (int *)a2 )
          break;
        if ( !(_DWORD)v4 )
          goto LABEL_10;
      }
      if ( v5[206] < 0 )
      {
        CD3DDeviceManager::DeleteUnusedDevice(this, v4);
      }
      else
      {
        CurrentFrameId = GetCurrentFrameId();
        v7 = g_pComposition;
        *(_QWORD *)(v8 + 1064) = CurrentFrameId + 1;
        if ( v7 )
        {
          v9 = *((_QWORD *)v7 + 64);
          if ( (unsigned int)(*(_DWORD *)(v9 + 25580) - 1) > 0x3E7 )
            *(_DWORD *)(v9 + 25580) = 1000;
        }
      }
    }
LABEL_10:
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  }
}
