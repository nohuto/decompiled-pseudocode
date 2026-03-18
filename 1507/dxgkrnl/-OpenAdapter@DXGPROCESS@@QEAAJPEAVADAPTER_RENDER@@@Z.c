/*
 * XREFs of ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z @ 0x1C00849DC
 * Callers:
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C0082060 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C00C21D8 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ??_GDXGPROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0017614 (--_GDXGPROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ?DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z @ 0x1C0092A5C (-DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00AAAC0 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::OpenAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2)
{
  char *v2; // rsi
  struct ADAPTER_RENDER *v3; // r12
  DXGPROCESS *v4; // r13
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // r15
  int v11; // eax
  unsigned __int64 v13; // rsi
  _QWORD *v14; // r12
  int v15; // eax
  unsigned int v16; // edx
  int v17; // r9d
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  _DWORD *v20; // rdi
  unsigned __int64 i; // rcx
  __int64 v22; // rdi
  __int64 v23; // rdx
  void *v24; // rax
  char v25; // cl
  UINT v26; // ecx
  ULONG *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int128 v32; // rax
  void *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // r13
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  _DXGKARG_CREATEPROCESS v42; // [rsp+20h] [rbp-58h] BYREF
  __int64 v45; // [rsp+90h] [rbp+18h]
  char *v46; // [rsp+98h] [rbp+20h]

  v2 = (char *)this + 176;
  v3 = a2;
  v46 = (char *)this + 176;
  v4 = this;
  LODWORD(v5) = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v6 = *(unsigned int *)(*((_QWORD *)v3 + 2) + 184LL);
  v7 = v6;
  v45 = v6;
  v8 = *(_QWORD *)(*((_QWORD *)v4 + 6) + 8 * v6);
  if ( v8 )
  {
    ++*(_DWORD *)(v8 + 24);
    goto LABEL_7;
  }
  v9 = operator new(0x20uLL, v6, 1, PagedPool);
  if ( !v9 )
  {
    LODWORD(v5) = -1073741801;
    goto LABEL_7;
  }
  v10 = *((_QWORD *)v3 + 2);
  if ( (*(_DWORD *)(v10 + 1380) & 0x80u) != 0 )
  {
    v13 = *(unsigned int *)(v10 + 232);
    if ( (_DWORD)v13 == 1 )
    {
      v14 = v9 + 1;
      v9[1] = v9;
    }
    else
    {
      v32 = *(unsigned int *)(v10 + 232) * (unsigned __int128)4uLL;
      if ( !is_mul_ok(v13, 4uLL) )
        *(_QWORD *)&v32 = -1LL;
      v33 = operator new(v32, DWORD2(v32), 1, PagedPool);
      v14 = v9 + 1;
      v9[1] = v33;
      if ( !v33 )
      {
        v35 = WdLogNewEntry5_WdLowResource(v34);
        *(_QWORD *)(v35 + 24) = 1066LL;
        WdLogEvent5_WdLowResource(v35);
        LODWORD(v5) = -1073741801;
LABEL_43:
        DXGPROCESS_ADAPTER_INFO::`scalar deleting destructor'((DXGPROCESS_ADAPTER_INFO *)v9);
        goto LABEL_7;
      }
    }
    v15 = *(_DWORD *)(v10 + 284);
    if ( (v15 & 4) != 0 || (v15 & 2) != 0 || (v15 & 8) != 0 )
    {
      v16 = 0;
      if ( (_DWORD)v13 )
      {
        if ( (unsigned int)v13 >= 4 )
        {
          v17 = *((_DWORD *)v4 + 16);
          v18 = *v14 + 4LL * (unsigned int)(v13 - 1);
          if ( (*v14 > (unsigned __int64)v4 + 64 || v18 < (unsigned __int64)v4 + 64)
            && (*v14 > (unsigned __int64)v14 || v18 < (unsigned __int64)v14) )
          {
            v19 = v13 - (v13 & 3);
            do
              v16 += 4;
            while ( v16 < v19 );
            v20 = (_DWORD *)*v14;
            for ( i = (16 * ((unsigned __int64)(v19 + 3) >> 2)) >> 2; i; --i )
              *v20++ = v17;
          }
        }
        if ( v16 < (unsigned int)v13 )
        {
          v22 = 4LL * v16;
          v23 = (unsigned int)v13 - v16;
          do
          {
            *(_DWORD *)(v22 + *v14) = *((_DWORD *)v4 + 16);
            v22 += 4LL;
            --v23;
          }
          while ( v23 );
        }
      }
    }
    else
    {
      v36 = 0LL;
      if ( (_DWORD)v13 )
      {
        v37 = 0LL;
        while ( 1 )
        {
          v38 = ExShareAddressSpaceWithDevice(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + *(_QWORD *)(v10 + 1896) + 8) + 64LL) + 152LL),
                  *v14 + 4 * v36);
          v5 = v38;
          if ( v38 < 0 )
            break;
          v36 = (unsigned int)(v36 + 1);
          v37 += 48LL;
          if ( (unsigned int)v36 >= (unsigned int)v13 )
          {
            v4 = this;
            goto LABEL_26;
          }
        }
        v40 = WdLogNewEntry5_WdError(v39);
        *(_QWORD *)(v40 + 24) = v10;
        *(_QWORD *)(v40 + 32) = v5;
        WdLogEvent5_WdError(v40);
        goto LABEL_43;
      }
    }
LABEL_26:
    v3 = a2;
    v7 = v45;
  }
  v11 = *(_DWORD *)(v10 + 1380);
  if ( (v11 & 0x80u) == 0 && (v11 & 0x40) == 0 )
    goto LABEL_6;
  v24 = (void *)*((_QWORD *)v4 + 9);
  v25 = *((_BYTE *)v4 + 312);
  v42.hKmdProcess = 0LL;
  v42.hDxgkProcess = v24;
  v26 = *((_BYTE *)v4 + 313) & 1 | (2 * (v25 & 1));
  v42.NumPasid = *(_DWORD *)(v10 + 232);
  v27 = (ULONG *)v9[1];
  v42.Flags.Value = v26;
  v42.pPasid = v27;
  LODWORD(v5) = ADAPTER_RENDER::DdiCreateProcess(v3, &v42);
  if ( (int)v5 < 0 )
  {
    v41 = WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
    *(_QWORD *)(v41 + 24) = 1115LL;
    WdLogEvent5_WdWarning(v41);
    goto LABEL_43;
  }
  v9[2] = v42.hKmdProcess;
LABEL_6:
  *(_QWORD *)(*((_QWORD *)v4 + 6) + 8 * v7) = v9;
  *((_DWORD *)v9 + 6) = 1;
LABEL_7:
  *((_QWORD *)v46 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v46, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
