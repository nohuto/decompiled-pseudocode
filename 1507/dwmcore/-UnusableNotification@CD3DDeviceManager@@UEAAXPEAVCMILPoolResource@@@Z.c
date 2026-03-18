/*
 * XREFs of ?UnusableNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x18008BA60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

void __fastcall CD3DDeviceManager::UnusableNotification(CD3DDeviceManager *this, struct CMILPoolResource *a2)
{
  unsigned int v4; // r8d
  char *v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  __int64 v13; // rax
  __int64 v14; // rcx
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v4 = 0;
  v5 = (char *)a2 - 392;
  if ( !a2 )
    v5 = 0LL;
  v6 = *((_DWORD *)this + 34);
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 13);
    while ( *(char **)(32LL * v4 + v7) != v5 )
    {
      if ( ++v4 >= v6 )
        goto LABEL_8;
    }
    v8 = v6 - 1;
    *((_DWORD *)this + 34) = v8;
    if ( v4 != (_DWORD)v8 )
    {
      v9 = 32 * v8;
      v10 = 32LL * v4;
      v11 = *(_OWORD *)(v10 + v7);
      v12 = *(_OWORD *)(v10 + v7 + 16);
      *(_OWORD *)(v7 + v10) = *(_OWORD *)(v9 + v7);
      *(_OWORD *)(v7 + v10 + 16) = *(_OWORD *)(v9 + v7 + 16);
      v13 = *((_QWORD *)this + 13);
      v14 = 32LL * *((unsigned int *)this + 34);
      *(_OWORD *)(v14 + v13) = v11;
      *(_OWORD *)(v14 + v13 + 16) = v12;
    }
  }
LABEL_8:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
}
