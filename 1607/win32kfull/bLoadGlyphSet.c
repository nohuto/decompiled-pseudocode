/*
 * XREFs of bLoadGlyphSet @ 0x1C001F968
 * Callers:
 *     bReloadGlyphSet @ 0x1C001C3C8 (bReloadGlyphSet.c)
 *     bLoadTTF @ 0x1C00207C4 (bLoadTTF.c)
 * Callees:
 *     cjComputeGLYPHSET_TEMPLATE @ 0x1C001C5E4 (cjComputeGLYPHSET_TEMPLATE.c)
 *     cjComputeGLYPHSET_MSFT_UNICODE @ 0x1C001FB60 (cjComputeGLYPHSET_MSFT_UNICODE.c)
 *     cjComputeGLYPHSET_HIGH_BYTE @ 0x1C02417A8 (cjComputeGLYPHSET_HIGH_BYTE.c)
 *     cjComputeGLYPHSET_MSFT_GENERAL @ 0x1C02419D0 (cjComputeGLYPHSET_MSFT_GENERAL.c)
 *     cjComputeGLYPHSET_OLDBIDI @ 0x1C0241C2C (cjComputeGLYPHSET_OLDBIDI.c)
 */

__int64 __fastcall bLoadGlyphSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID *a5)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  ULONG v9; // eax
  PVOID v10; // rax
  int v12; // r8d
  int v13; // r9d

  v6 = 1;
  v7 = *(_QWORD *)(a1 + 64) + *(unsigned int *)(a1 + 160);
  *a5 = 0LL;
  switch ( *(_DWORD *)(a1 + 316) )
  {
    case 1:
      v13 = 1;
      goto LABEL_22;
    case 2:
      v13 = 2;
LABEL_22:
      v12 = 0;
      goto LABEL_11;
    case 3:
      v9 = cjComputeGLYPHSET_MSFT_UNICODE(a2, 0LL, 0LL);
      v10 = EngAllocMem(0, v9, 0x64667454u);
      *a5 = v10;
      if ( v10 && !(unsigned int)cjComputeGLYPHSET_MSFT_UNICODE(a2, a3, v10) )
      {
        EngFreeMem(*a5);
        *a5 = 0LL;
      }
      break;
    case 4:
      v12 = *(_DWORD *)(a1 + 320);
      v13 = 4;
LABEL_11:
      cjComputeGLYPHSET_TEMPLATE(a3, a5, v12, v13);
      break;
    case 5:
      cjComputeGLYPHSET_HIGH_BYTE(a2, a5, a4);
      break;
    case 6:
      cjComputeGLYPHSET_MSFT_GENERAL(a2, (unsigned __int16)__ROR2__(*(_WORD *)(v7 + 4), 8), a5);
      break;
    case 7:
      cjComputeGLYPHSET_OLDBIDI(a3, a5, *(unsigned int *)(a1 + 320));
      break;
    default:
      *a5 = 0LL;
      return 0;
  }
  if ( !*a5 )
    return 0;
  return v6;
}
