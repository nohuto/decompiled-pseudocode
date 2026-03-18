/*
 * XREFs of ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00A69D0
 * Callers:
 *     ?WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000496C (-WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0020A18 (-WriteDiagnosticEntry@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C01464B8 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::WriteDiagnosticEntry(DXGDIAGNOSTICS *this, struct _DXGK_DIAG_HEADER *Src)
{
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebp
  unsigned int v7; // esi
  unsigned int v8; // edx
  __int64 v9; // rsi
  struct _DXGK_DIAG_HEADER *v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // ebp
  size_t v13; // r8
  void *v14; // rcx
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r14d
  _QWORD *v21; // rax
  unsigned int v22; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int8 v23[48]; // [rsp+28h] [rbp-50h] BYREF

  if ( !Src )
    return 2147483653LL;
  v4 = *((_DWORD *)Src + 1);
  v5 = *(_DWORD *)this;
  if ( v4 >= v5 || v4 < 0x30 )
    return 2147483653LL;
  v6 = *((_DWORD *)this + 1);
  v7 = *((_DWORD *)this + 2);
  if ( v6 > v7 )
    v7 += v5;
  if ( v7 + v4 - v6 < v5 )
    goto LABEL_7;
  while ( 1 )
  {
    memset(v23, 0, sizeof(v23));
    v22 = 48;
    v20 = DXGDIAGNOSTICS::ReadDiagnostics(this, v23, &v22);
    if ( v20 < 0 )
      break;
    v6 += *(_DWORD *)&v23[4];
    *((_DWORD *)this + 1) = (unsigned int)(*(_DWORD *)&v23[4] + *((_DWORD *)this + 1)) % *(_DWORD *)this;
    if ( v7 + *((_DWORD *)Src + 1) - v6 < *(_DWORD *)this )
      goto LABEL_14;
  }
  v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
  v21[3] = v6;
  v21[4] = Src;
  v21[5] = *((unsigned int *)Src + 1);
  WdLogEvent5_WdWarning(v21);
LABEL_14:
  if ( v20 >= 0 )
  {
LABEL_7:
    v8 = v7 % *(_DWORD *)this;
    *((_DWORD *)Src + 10) = (*((_DWORD *)this + 3))++;
    v9 = v8;
    *((_DWORD *)Src + 11) = WdLogGetEventOrder();
    v10 = Src;
    v11 = *((_DWORD *)Src + 1);
    v12 = v11 + v9;
    if ( v11 + (unsigned int)v9 > *(_DWORD *)this )
    {
      memmove((void *)(*((_QWORD *)this + 2) + v9), Src, (unsigned int)(*(_DWORD *)this - v9));
      v13 = v12 - *(_DWORD *)this;
      v14 = (void *)*((_QWORD *)this + 2);
      v10 = (struct _DXGK_DIAG_HEADER *)((char *)Src + (unsigned int)(*(_DWORD *)this - v9));
    }
    else
    {
      v13 = v11;
      v14 = (void *)(*((_QWORD *)this + 2) + (unsigned int)v9);
    }
    memmove(v14, v10, v13);
    result = 0LL;
    *((_DWORD *)this + 2) = v12 % *(_DWORD *)this;
  }
  else
  {
    *((_DWORD *)this + 2) = 0;
    result = (unsigned int)v20;
    *((_DWORD *)this + 1) = 0;
  }
  return result;
}
