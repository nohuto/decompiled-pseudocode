/*
 * XREFs of ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x180037E40
 * Callers:
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x1800477B4 (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z @ 0x180047924 (-DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z.c)
 *     ?DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z @ 0x180047A24 (-DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z.c)
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x1800A4CA8 (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?Resize@HANDLE_TABLE@@AEAAJI@Z @ 0x180037F10 (-Resize@HANDLE_TABLE@@AEAAJI@Z.c)
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x180037FB4 (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall HANDLE_TABLE::GetNewEntry(HANDLE_TABLE *this, int a2, unsigned int *a3)
{
  unsigned int v4; // esi
  unsigned int v7; // edi
  unsigned int v8; // edx
  int v9; // eax
  int v11; // eax
  int v12; // eax

  v4 = 0;
  if ( *((_DWORD *)this + 3) >= 0x400u || (v11 = HANDLE_TABLE::Resize(this, 0x400u), v4 = v11, v11 >= 0) )
  {
    *a3 = 0;
    v7 = *((_DWORD *)this + 4);
    while ( *(_DWORD *)(v7 * *((_DWORD *)this + 2) + *((_QWORD *)this + 3)) )
    {
      if ( ++v7 == *((_DWORD *)this + 3) )
        v7 = 1;
      if ( v7 == *((_DWORD *)this + 4) )
      {
        v7 = 0;
        break;
      }
    }
    v8 = *((_DWORD *)this + 3);
    v9 = v7 + 1;
    if ( v7 + 1 == v8 )
      v9 = 1;
    *((_DWORD *)this + 4) = v9;
    if ( !v7 )
    {
      v7 = v8;
      v12 = HANDLE_TABLE::ResizeToFit(this, v8);
      v4 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x156u);
        return v4;
      }
      *((_DWORD *)this + 4) = v7 + 1;
    }
    *(_DWORD *)(v7 * *((_DWORD *)this + 2) + *((_QWORD *)this + 3)) = a2;
    *a3 = v7;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x120u);
  }
  return v4;
}
