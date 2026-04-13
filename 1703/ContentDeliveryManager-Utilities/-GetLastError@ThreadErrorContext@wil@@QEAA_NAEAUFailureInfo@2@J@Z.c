/*
 * XREFs of ?GetLastError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@J@Z @ 0x180003948
 * Callers:
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000AB88 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 */

char __fastcall wil::ThreadErrorContext::GetLastError(
        wil::ThreadErrorContext *this,
        struct wil::FailureInfo *a2,
        int a3)
{
  __int64 v3; // r9
  unsigned int v5; // r11d
  char v7; // cl
  unsigned int *v8; // rdx
  unsigned int *v9; // rbx
  unsigned int v10; // esi
  unsigned int *v11; // r8
  unsigned int *v12; // rdx

  v3 = *(_QWORD *)this;
  v5 = *((_DWORD *)this + 2);
  v7 = 0;
  v8 = *(unsigned int **)(v3 + 24);
  if ( v8 )
  {
    v9 = &v8[22 * *(unsigned __int16 *)(v3 + 34)];
    v10 = v9[1];
    if ( v5 < v10 )
    {
      if ( !a3 )
      {
        memset_0(a2, 0, 0x90uLL);
        *((_DWORD *)a2 + 2) = v10;
LABEL_15:
        v7 = 1;
        *((_DWORD *)a2 + 1) = v9[2];
        *((_QWORD *)a2 + 6) = *((_QWORD *)v9 + 2);
        *((_DWORD *)a2 + 14) = *((unsigned __int16 *)v9 + 12);
        *(_DWORD *)a2 = v9[7];
        *((_QWORD *)a2 + 15) = *((_QWORD *)v9 + 5);
        *((_QWORD *)a2 + 16) = *((_QWORD *)v9 + 6);
        *((_QWORD *)a2 + 17) = *((_QWORD *)v9 + 7);
        *((_QWORD *)a2 + 2) = *((_QWORD *)v9 + 8);
        return v7;
      }
      v9 = 0LL;
      v11 = &v8[22 * *(unsigned __int16 *)(v3 + 32)];
      if ( v8 != v11 )
      {
        v12 = v8 + 1;
        do
        {
          if ( v12[1] == a3 && *v12 > v5 && (!v9 || *v12 < v9[1]) )
            v9 = v12 - 1;
          v12 += 22;
        }
        while ( v12 - 1 != v11 );
        if ( v9 )
        {
          memset_0(a2, 0, 0x90uLL);
          *((_DWORD *)a2 + 2) = v9[1];
          goto LABEL_15;
        }
      }
    }
  }
  return v7;
}
