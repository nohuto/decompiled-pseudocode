/*
 * XREFs of ?UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180090B90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x18008BAE0 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 */

void __fastcall CD3DDeviceManager::UnusedNotification(CD3DDeviceManager *this, struct CMILPoolResource *a2)
{
  int v4; // ecx
  unsigned int v5; // edx
  struct CMILPoolResource *v6; // r8
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 72) )
  {
    v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
    if ( a2 )
      a2 = (struct CMILPoolResource *)((char *)a2 - 392);
    v4 = *((_DWORD *)this + 32);
    if ( v4 )
    {
      v5 = v4 - 1;
      while ( 1 )
      {
        v6 = *(struct CMILPoolResource **)(32LL * v5 + *((_QWORD *)this + 13));
        if ( v6 == a2 )
          break;
        --v5;
        if ( !--v4 )
          goto LABEL_10;
      }
      if ( !*((_DWORD *)v6 + 100) )
      {
        if ( *((int *)v6 + 209) >= 0 )
          *((_BYTE *)this + 88) = 1;
        else
          CD3DDeviceManager::DeleteUnusedDevice(this, v5);
      }
    }
LABEL_10:
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
  }
}
