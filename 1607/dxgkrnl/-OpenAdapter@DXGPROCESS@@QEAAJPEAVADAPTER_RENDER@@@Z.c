/*
 * XREFs of ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z @ 0x1C00A2F30
 * Callers:
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C009CDF8 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C00E3B80 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ??_GDXGPROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C000CD7C (--_GDXGPROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z @ 0x1C0092058 (-DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00D5328 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::OpenAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2)
{
  char *v2; // rsi
  struct ADAPTER_RENDER *v3; // rbp
  DXGPROCESS *v4; // r15
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // r13
  int v11; // eax
  char v12; // cl
  UINT v13; // ecx
  ULONG *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v21; // rbp
  _QWORD *v22; // r12
  int v23; // eax
  unsigned int v24; // edx
  int v25; // r9d
  unsigned __int64 v26; // rax
  unsigned int v27; // ecx
  _DWORD *v28; // rdi
  unsigned __int64 i; // rcx
  __int64 v30; // rdi
  __int64 v31; // rdx
  unsigned __int128 v32; // rax
  void *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // r15
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  _DXGKARG_CREATEPROCESS v43; // [rsp+20h] [rbp-68h] BYREF
  __int64 v46; // [rsp+A0h] [rbp+18h]
  char *v47; // [rsp+A8h] [rbp+20h]

  v2 = (char *)this + 168;
  v3 = a2;
  v47 = (char *)this + 168;
  v4 = this;
  LODWORD(v5) = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v6 = *(unsigned int *)(*((_QWORD *)v3 + 2) + 200LL);
  v7 = v6;
  v46 = v6;
  v8 = *(_QWORD *)(*((_QWORD *)v4 + 5) + 8 * v6);
  if ( v8 )
  {
    ++*(_DWORD *)(v8 + 24);
    goto LABEL_9;
  }
  v9 = operator new(0x20uLL, v6, 1, PagedPool);
  if ( !v9 )
  {
    LODWORD(v5) = -1073741801;
    goto LABEL_9;
  }
  v10 = *((_QWORD *)v3 + 2);
  if ( (*(_DWORD *)(v10 + 1524) & 0x80u) != 0 )
  {
    v21 = *(unsigned int *)(v10 + 248);
    if ( (_DWORD)v21 == 1 )
    {
      v22 = v9 + 1;
      v9[1] = v9;
    }
    else
    {
      v32 = *(unsigned int *)(v10 + 248) * (unsigned __int128)4uLL;
      if ( !is_mul_ok(v21, 4uLL) )
        *(_QWORD *)&v32 = -1LL;
      v33 = operator new(v32, DWORD2(v32), 1, PagedPool);
      v22 = v9 + 1;
      v9[1] = v33;
      if ( !v33 )
      {
        v35 = WdLogNewEntry5_WdLowResource(v34);
        *(_QWORD *)(v35 + 24) = 1395LL;
        WdLogEvent5_WdLowResource(v35);
        LODWORD(v5) = -1073741801;
LABEL_44:
        DXGPROCESS_ADAPTER_INFO::`scalar deleting destructor'((DXGPROCESS_ADAPTER_INFO *)v9);
        goto LABEL_9;
      }
    }
    v23 = *(_DWORD *)(v10 + 300);
    if ( (v23 & 8) != 0 || (v23 & 4) != 0 || (v23 & 0x10) != 0 )
    {
      v24 = 0;
      if ( (_DWORD)v21 )
      {
        if ( (unsigned int)v21 >= 4 )
        {
          v25 = *((_DWORD *)v4 + 14);
          v26 = *v22 + 4LL * (unsigned int)(v21 - 1);
          if ( (*v22 > (unsigned __int64)v4 + 56 || v26 < (unsigned __int64)v4 + 56)
            && (*v22 > (unsigned __int64)v22 || v26 < (unsigned __int64)v22) )
          {
            v27 = v21 - (v21 & 3);
            do
              v24 += 4;
            while ( v24 < v27 );
            v28 = (_DWORD *)*v22;
            for ( i = (16 * ((unsigned __int64)(v27 + 3) >> 2)) >> 2; i; --i )
              *v28++ = v25;
          }
        }
        if ( v24 < (unsigned int)v21 )
        {
          v30 = 4LL * v24;
          v31 = (unsigned int)v21 - v24;
          do
          {
            *(_DWORD *)(v30 + *v22) = *((_DWORD *)v4 + 14);
            v30 += 4LL;
            --v31;
          }
          while ( v31 );
        }
      }
    }
    else
    {
      v36 = 0LL;
      if ( (_DWORD)v21 )
      {
        v37 = 0LL;
        do
        {
          v38 = *(_QWORD *)(v10 + 2040);
          if ( (*(_DWORD *)(v37 + v38 + 16) & 1) != 0 )
          {
            v39 = ExShareAddressSpaceWithDevice(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + v38 + 8) + 64LL) + 152LL),
                    *v22 + 4 * v36);
            v5 = v39;
            if ( v39 < 0 )
            {
              v41 = WdLogNewEntry5_WdError(v40);
              *(_QWORD *)(v41 + 24) = v10;
              *(_QWORD *)(v41 + 32) = v5;
              WdLogEvent5_WdError(v41);
              goto LABEL_44;
            }
          }
          v36 = (unsigned int)(v36 + 1);
          v37 += 48LL;
        }
        while ( (unsigned int)v36 < (unsigned int)v21 );
        v4 = this;
      }
    }
    v3 = a2;
    v7 = v46;
  }
  v11 = *(_DWORD *)(v10 + 1524);
  if ( (v11 & 0x80u) == 0 && (v11 & 0x40) == 0 )
    goto LABEL_8;
  memset(&v43, 0, 0x20uLL);
  v12 = *((_BYTE *)v4 + 288);
  v43.hDxgkProcess = (HANDLE)*((_QWORD *)v4 + 8);
  v13 = v43.Flags.Value & 0xFFFFFFFC | *((_BYTE *)v4 + 289) & 1 | (2 * (v12 & 1));
  v43.NumPasid = *(_DWORD *)(v10 + 248);
  v14 = (ULONG *)v9[1];
  v43.Flags.Value = v13;
  v43.pPasid = v14;
  LODWORD(v5) = ADAPTER_RENDER::DdiCreateProcess(v3, &v43, v15);
  if ( (int)v5 < 0 )
  {
    v42 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    *(_QWORD *)(v42 + 24) = 1448LL;
    WdLogEvent5_WdWarning(v42);
    goto LABEL_44;
  }
  v9[2] = v43.hKmdProcess;
LABEL_8:
  *(_QWORD *)(*((_QWORD *)v4 + 5) + 8 * v7) = v9;
  *((_DWORD *)v9 + 6) = 1;
LABEL_9:
  *((_QWORD *)v47 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v47, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
