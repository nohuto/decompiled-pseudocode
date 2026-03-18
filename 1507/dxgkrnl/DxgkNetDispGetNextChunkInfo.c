/*
 * XREFs of DxgkNetDispGetNextChunkInfo @ 0x1C012A120
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkMiracastGetNextChunkInfo @ 0x1C00267C0 (DxgkMiracastGetNextChunkInfo.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkNetDispGetNextChunkInfo(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        ULONG64 a5,
        char *a6,
        __int64 a7)
{
  __int64 v8; // rbx
  struct D3DKMT_MIRACAST_CHUNK_DATA *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  int NextChunkInfo; // ebx
  unsigned int *v17; // rax
  SIZE_T v18; // r14
  unsigned int v19; // ecx
  __int64 v20; // rsi
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  _DWORD *v26; // r13
  _DWORD *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  char *v33; // rdx
  __int64 i; // rsi
  PVOID v35; // rcx
  unsigned int v37; // [rsp+30h] [rbp-1C8h] BYREF
  NTSTATUS v38; // [rsp+34h] [rbp-1C4h]
  int v39; // [rsp+38h] [rbp-1C0h]
  unsigned int v40; // [rsp+3Ch] [rbp-1BCh]
  unsigned int v41; // [rsp+40h] [rbp-1B8h] BYREF
  struct D3DKMT_MIRACAST_CHUNK_DATA *v42; // [rsp+48h] [rbp-1B0h]
  ULONG64 v43; // [rsp+50h] [rbp-1A8h]
  __int64 v44; // [rsp+58h] [rbp-1A0h]
  ULONG64 v45; // [rsp+60h] [rbp-198h]
  char *v46; // [rsp+68h] [rbp-190h]
  __int64 v47[2]; // [rsp+70h] [rbp-188h] BYREF
  PVOID Object; // [rsp+80h] [rbp-178h] BYREF
  __int64 v49; // [rsp+90h] [rbp-168h] BYREF
  PVOID v50[35]; // [rsp+98h] [rbp-160h] BYREF

  v8 = a3;
  v40 = a2;
  v43 = a5;
  v45 = a5;
  v46 = a6;
  v44 = a7;
  v47[1] = a7;
  v10 = 0LL;
  v42 = 0LL;
  v49 = 0LL;
  memset(v50, 0, sizeof(v50));
  if ( (unsigned int)v8 <= 4 )
  {
    LODWORD(v50[34]) = v8;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v47[0] = *a1;
    v17 = (unsigned int *)a5;
    if ( a5 >= MmUserProbeAddress )
      v17 = (unsigned int *)MmUserProbeAddress;
    v18 = *v17;
    v37 = *v17;
    v19 = (unsigned int)v50[34];
    if ( LODWORD(v50[34]) )
    {
      if ( (a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + LODWORD(v50[34]) > MmUserProbeAddress || a4 + LODWORD(v50[34]) < a4 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v19 = (unsigned int)v50[34];
      }
    }
    v20 = 0LL;
    v39 = 0;
    while ( (unsigned int)v20 < v19 )
    {
      v21 = ObReferenceObjectByHandle(
              *(HANDLE *)(a4 + 8 * v20),
              0x1F0003u,
              (POBJECT_TYPE)ExEventObjectType,
              1,
              &Object,
              0LL);
      v50[v20] = Object;
      NextChunkInfo = v21;
      v38 = v21;
      if ( v21 < 0 )
      {
        v25 = WdLogNewEntry5_WdWarning((unsigned int)v21, v22, v23, v24);
        *(_QWORD *)(v25 + 24) = *(_QWORD *)(a4 + 8 * v20);
        *(_QWORD *)(v25 + 32) = NextChunkInfo;
        WdLogEvent5_WdWarning(v25);
        v26 = (_DWORD *)v43;
        v27 = (_DWORD *)v44;
        goto LABEL_21;
      }
      v20 = (unsigned int)(v20 + 1);
      v39 = v20;
      v19 = (unsigned int)v50[34];
    }
    v10 = (struct D3DKMT_MIRACAST_CHUNK_DATA *)operator new[](v18, 0x4B677844u, (POOL_TYPE)512);
    v42 = v10;
    if ( !v10 )
    {
      v32 = WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
      *(_QWORD *)(v32 + 24) = 29389LL;
      WdLogEvent5_WdWarning(v32);
      NextChunkInfo = -1073741801;
      goto LABEL_32;
    }
    NextChunkInfo = DxgkMiracastGetNextChunkInfo(v47, v40, (__int64)&v49, &v37, v10, &v41);
    v38 = NextChunkInfo;
    LODWORD(v18) = v37;
    v26 = (_DWORD *)v43;
    v27 = (_DWORD *)v44;
LABEL_21:
    if ( NextChunkInfo >= 0 )
    {
      if ( (_DWORD)v18 )
      {
        v33 = &a6[(unsigned int)v18];
        if ( (unsigned __int64)v33 > MmUserProbeAddress || v33 <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v10, (unsigned int)v18);
      }
      if ( (unsigned __int64)v27 >= MmUserProbeAddress )
        v27 = (_DWORD *)MmUserProbeAddress;
      *v27 = v41;
      if ( (unsigned __int64)v26 >= MmUserProbeAddress )
        v26 = (_DWORD *)MmUserProbeAddress;
      *v26 = v18;
    }
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    v15[3] = v8;
    v15[4] = 4LL;
    NextChunkInfo = -1073741811;
    v15[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
  }
LABEL_32:
  for ( i = 0LL; (unsigned int)i < LODWORD(v50[34]); i = (unsigned int)(i + 1) )
  {
    v35 = v50[i];
    if ( v35 )
      ObfDereferenceObject(v35);
  }
  if ( v10 )
    operator delete(v10);
  return (unsigned int)NextChunkInfo;
}
