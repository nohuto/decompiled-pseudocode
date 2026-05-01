/*
 * XREFs of ?RmpCpuSetManagerAcquireSetsForAllocationCallback@@YAEPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@PEAX@Z @ 0x18001D8B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     ?RmpCpuSetManagerMoveCpuSet@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@1KK@Z @ 0x18001DA0C (-RmpCpuSetManagerMoveCpuSet@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@1KK@Z.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@K@Z @ 0x180030FA8 (-RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATI.c)
 */

bool __fastcall RmpCpuSetManagerAcquireSetsForAllocationCallback(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_ALLOCATION *a2,
        struct _RM_CPU_SET_ALLOCATION **a3)
{
  int v3; // r12d
  unsigned int v7; // r14d
  unsigned __int64 *v8; // rsi
  __int64 v10; // rax
  int v11; // edx
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  struct _RM_CPU_SET_ALLOCATION *v15; // rax
  char v17; // [rsp+30h] [rbp-69h] BYREF
  char v18; // [rsp+31h] [rbp-68h] BYREF
  int v19; // [rsp+34h] [rbp-65h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  struct _RM_CPU_SET_ALLOCATION *v21; // [rsp+60h] [rbp-39h]
  int v22; // [rsp+68h] [rbp-31h]
  int v23; // [rsp+6Ch] [rbp-2Dh]
  char *v24; // [rsp+70h] [rbp-29h]
  int v25; // [rsp+78h] [rbp-21h]
  int v26; // [rsp+7Ch] [rbp-1Dh]
  struct _RM_CPU_SET_ALLOCATION *v27; // [rsp+80h] [rbp-19h]
  int v28; // [rsp+88h] [rbp-11h]
  int v29; // [rsp+8Ch] [rbp-Dh]
  char *v30; // [rsp+90h] [rbp-9h]
  int v31; // [rsp+98h] [rbp-1h]
  int v32; // [rsp+9Ch] [rbp+3h]
  int *v33; // [rsp+A0h] [rbp+7h]
  int v34; // [rsp+A8h] [rbp+Fh]
  int v35; // [rsp+ACh] [rbp+13h]

  v3 = 0;
  if ( *((_DWORD *)a2 + 68) )
  {
    v7 = 0;
    v8 = (unsigned __int64 *)((char *)a2 + 112);
    do
    {
      if ( *v8 )
      {
        while ( *((_DWORD *)a3 + 2) )
        {
          if ( !_BitScanForward64((unsigned __int64 *)&v10, *v8) )
            break;
          RmpCpuSetManagerMoveCpuSet(a1, *a3, a2, v7, v10);
          --*((_DWORD *)a3 + 2);
          ++v3;
        }
        if ( !*((_DWORD *)a3 + 2) )
          break;
      }
      ++v7;
      ++v8;
    }
    while ( v7 < 0x14 );
    if ( *((_DWORD *)a2 + 70) == 2 )
      RmpCpuSetManagerReleaseAllocationInternal(a1, a2, 1u);
  }
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(a1, 1uLL) )
  {
    v15 = *a3;
    v23 = 0;
    v21 = v15;
    v22 = 8;
    LOBYTE(v15) = *((_BYTE *)v15 + 280);
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v17 = (char)v15;
    v24 = &v17;
    v18 = *((_BYTE *)a2 + 280);
    v30 = &v18;
    v33 = &v19;
    v25 = v11;
    v27 = a2;
    v28 = 8;
    v31 = v11;
    v19 = v3;
    v34 = 4;
    TlgWrite(v12, &unk_1800414CC, v13, v14, 7u, &pData);
  }
  return *((_DWORD *)a3 + 2) != 0;
}
