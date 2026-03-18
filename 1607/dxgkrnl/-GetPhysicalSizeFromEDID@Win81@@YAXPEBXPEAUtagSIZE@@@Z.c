/*
 * XREFs of ?GetPhysicalSizeFromEDID@Win81@@YAXPEBXPEAUtagSIZE@@@Z @ 0x1C0190AFC
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0190EE8 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Win81::GetPhysicalSizeFromEDID(Win81 *this, int *a2, struct tagSIZE *a3, __int64 a4)
{
  int v5; // ebp
  int v6; // edi
  _QWORD *v7; // rax
  int v8; // esi
  int v9; // ebx
  int v10; // eax
  int v11; // eax

  v5 = 10 * *((unsigned __int8 *)this + 21);
  v6 = 10 * *((unsigned __int8 *)this + 22);
  if ( *((_WORD *)this + 27) || *((_BYTE *)this + 56) )
  {
    v8 = *((unsigned __int8 *)this + 66) | (*((unsigned __int8 *)this + 68) >> 4 << 8);
    v9 = *((unsigned __int8 *)this + 67) | ((*((_BYTE *)this + 68) & 0xF) << 8);
    if ( v8 < v5 )
      v10 = v5 - v8;
    else
      v10 = v8 - v5;
    if ( v10 < 10 )
    {
      v11 = v9 < v6 ? v6 - v9 : v9 - v6;
      if ( v11 < 10 )
      {
        *a2 = v8;
        a2[1] = v9;
        return;
      }
    }
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    v7[3] = v8;
    v7[4] = v9;
    v7[5] = v5;
    v7[6] = v6;
  }
  else
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    v7[3] = 702LL;
  }
  WdLogEvent5_WdWarning(v7);
  a2[1] = v6;
  *a2 = v5;
}
