/*
 * XREFs of ?UnusableNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180172FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

void __fastcall CD3DDeviceManager::UnusableNotification(CD3DDeviceManager *this, struct CMILPoolResource *a2)
{
  unsigned int v4; // r8d
  char *v5; // rdi
  unsigned int v6; // edx
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  __int64 v13; // xmm4_8
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+30h] [rbp+8h] BYREF

  v16 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v4 = 0;
  if ( a2 )
    v5 = (char *)a2 - 408;
  else
    v5 = 0LL;
  v6 = *((_DWORD *)this + 64);
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 18);
    while ( *(char **)(v7 + 40LL * v4) != v5 )
    {
      if ( ++v4 >= v6 )
        goto LABEL_11;
    }
    v8 = v6 - 1;
    *((_DWORD *)this + 64) = v8;
    if ( v4 != (_DWORD)v8 )
    {
      v9 = 5 * v8;
      v10 = 5LL * v4;
      v11 = *(_OWORD *)(v7 + 40LL * v4);
      v12 = *(_OWORD *)(v7 + 40LL * v4 + 16);
      v13 = *(_QWORD *)(v7 + 40LL * v4 + 32);
      *(_OWORD *)(v7 + 8 * v10) = *(_OWORD *)(v7 + 8 * v9);
      *(_OWORD *)(v7 + 8 * v10 + 16) = *(_OWORD *)(v7 + 8 * v9 + 16);
      *(_QWORD *)(v7 + 8 * v10 + 32) = *(_QWORD *)(v7 + 8 * v9 + 32);
      v14 = 5LL * *((unsigned int *)this + 64);
      v15 = *((_QWORD *)this + 18);
      *(_OWORD *)(v15 + 8 * v14) = v11;
      *(_OWORD *)(v15 + 8 * v14 + 16) = v12;
      *(_QWORD *)(v15 + 8 * v14 + 32) = v13;
    }
  }
LABEL_11:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
}
