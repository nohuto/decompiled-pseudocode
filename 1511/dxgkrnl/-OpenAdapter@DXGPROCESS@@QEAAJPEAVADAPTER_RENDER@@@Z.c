/*
 * XREFs of ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z @ 0x1C006781C
 * Callers:
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C006B51C (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C00D5A58 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ??_GDXGPROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C000C5E0 (--_GDXGPROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ?DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z @ 0x1C0069648 (-DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00BE388 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::OpenAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2)
{
  char *v2; // rsi
  struct ADAPTER_RENDER *v3; // rbp
  DXGPROCESS *v4; // r12
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // r15
  int v11; // eax
  void *v12; // rax
  char v13; // cl
  UINT v14; // ecx
  ULONG *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v21; // rbp
  _QWORD *v22; // r13
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
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // r12
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  _DXGKARG_CREATEPROCESS v46; // [rsp+20h] [rbp-68h] BYREF
  __int64 v49; // [rsp+A0h] [rbp+18h]
  char *v50; // [rsp+A8h] [rbp+20h]

  v2 = (char *)this + 176;
  v3 = a2;
  v50 = (char *)this + 176;
  v4 = this;
  LODWORD(v5) = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v6 = *(unsigned int *)(*((_QWORD *)v3 + 2) + 184LL);
  v7 = v6;
  v49 = v6;
  v8 = *(_QWORD *)(*((_QWORD *)v4 + 6) + 8 * v6);
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
  if ( (*(_DWORD *)(v10 + 1388) & 0x80u) != 0 )
  {
    v21 = *(unsigned int *)(v10 + 232);
    if ( (_DWORD)v21 == 1 )
    {
      v22 = v9 + 1;
      v9[1] = v9;
    }
    else
    {
      v32 = *(unsigned int *)(v10 + 232) * (unsigned __int128)4uLL;
      if ( !is_mul_ok(v21, 4uLL) )
        *(_QWORD *)&v32 = -1LL;
      v33 = operator new(v32, DWORD2(v32), 1, PagedPool);
      v22 = v9 + 1;
      v9[1] = v33;
      if ( !v33 )
      {
        v38 = WdLogNewEntry5_WdLowResource(v35, v34, v36, v37);
        *(_QWORD *)(v38 + 24) = 1067LL;
        WdLogEvent5_WdLowResource(v38);
        LODWORD(v5) = -1073741801;
LABEL_44:
        DXGPROCESS_ADAPTER_INFO::`scalar deleting destructor'((DXGPROCESS_ADAPTER_INFO *)v9);
        goto LABEL_9;
      }
    }
    v23 = *(_DWORD *)(v10 + 284);
    if ( (v23 & 8) != 0 || (v23 & 4) != 0 || (v23 & 0x10) != 0 )
    {
      v24 = 0;
      if ( (_DWORD)v21 )
      {
        if ( (unsigned int)v21 >= 4 )
        {
          v25 = *((_DWORD *)v4 + 16);
          v26 = *v22 + 4LL * (unsigned int)(v21 - 1);
          if ( (*v22 > (unsigned __int64)v4 + 64 || v26 < (unsigned __int64)v4 + 64)
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
            *(_DWORD *)(v30 + *v22) = *((_DWORD *)v4 + 16);
            v30 += 4LL;
            --v31;
          }
          while ( v31 );
        }
      }
    }
    else
    {
      v39 = 0LL;
      if ( (_DWORD)v21 )
      {
        v40 = 0LL;
        do
        {
          v41 = *(_QWORD *)(v10 + 1904);
          if ( (*(_DWORD *)(v40 + v41 + 16) & 1) != 0 )
          {
            v42 = ExShareAddressSpaceWithDevice(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 + v41 + 8) + 64LL) + 152LL),
                    *v22 + 4 * v39);
            v5 = v42;
            if ( v42 < 0 )
            {
              v44 = WdLogNewEntry5_WdError(v43);
              *(_QWORD *)(v44 + 24) = v10;
              *(_QWORD *)(v44 + 32) = v5;
              WdLogEvent5_WdError(v44);
              goto LABEL_44;
            }
          }
          v39 = (unsigned int)(v39 + 1);
          v40 += 48LL;
        }
        while ( (unsigned int)v39 < (unsigned int)v21 );
        v4 = this;
      }
    }
    v3 = a2;
    v7 = v49;
  }
  v11 = *(_DWORD *)(v10 + 1388);
  if ( (v11 & 0x80u) == 0 && (v11 & 0x40) == 0 )
    goto LABEL_8;
  v12 = (void *)*((_QWORD *)v4 + 9);
  v13 = *((_BYTE *)v4 + 312);
  v46.hKmdProcess = 0LL;
  v46.hDxgkProcess = v12;
  v14 = *((_BYTE *)v4 + 313) & 1 | (2 * (v13 & 1));
  v46.NumPasid = *(_DWORD *)(v10 + 232);
  v15 = (ULONG *)v9[1];
  v46.Flags.Value = v14;
  v46.pPasid = v15;
  LODWORD(v5) = ADAPTER_RENDER::DdiCreateProcess(v3, &v46);
  if ( (int)v5 < 0 )
  {
    v45 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    *(_QWORD *)(v45 + 24) = 1120LL;
    WdLogEvent5_WdWarning(v45);
    goto LABEL_44;
  }
  v9[2] = v46.hKmdProcess;
LABEL_8:
  *(_QWORD *)(*((_QWORD *)v4 + 6) + 8 * v7) = v9;
  *((_DWORD *)v9 + 6) = 1;
LABEL_9:
  *((_QWORD *)v50 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v50, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
