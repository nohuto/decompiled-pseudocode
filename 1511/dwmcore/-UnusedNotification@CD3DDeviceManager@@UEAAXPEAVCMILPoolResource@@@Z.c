/*
 * XREFs of ?UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180071260
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x180071AA8 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

void __fastcall CD3DDeviceManager::UnusedNotification(CD3DDeviceManager *this, struct CMILPoolResource *a2)
{
  int v4; // ecx
  unsigned int v5; // edx
  struct CMILPoolResource *v6; // r8
  char *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 149) )
  {
    v7 = (char *)this + 24;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
    if ( a2 )
      a2 = (struct CMILPoolResource *)((char *)a2 - 384);
    v4 = *((_DWORD *)this + 30);
    if ( v4 )
    {
      v5 = v4 - 1;
      while ( 1 )
      {
        v6 = *(struct CMILPoolResource **)(32LL * v5 + *((_QWORD *)this + 12));
        if ( v6 == a2 )
          break;
        --v5;
        if ( !--v4 )
          goto LABEL_10;
      }
      if ( !*((_DWORD *)v6 + 98) )
      {
        if ( *((int *)v6 + 200) < 0 )
          CD3DDeviceManager::DeleteUnusedDevice(this, v5);
        else
          *((_BYTE *)this + 148) = 1;
      }
    }
LABEL_10:
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
  }
}
