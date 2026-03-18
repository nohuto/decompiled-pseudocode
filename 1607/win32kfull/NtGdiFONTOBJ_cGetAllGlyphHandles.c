/*
 * XREFs of NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C02B0050
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     FONTOBJ_cGetAllGlyphHandles @ 0x1C0283E20 (FONTOBJ_cGetAllGlyphHandles.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C02841D4 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C02ABF28 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 */

__int64 __fastcall NtGdiFONTOBJ_cGetAllGlyphHandles(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  ULONG v6; // esi
  HGLYPH *v7; // rbx
  ULONG v8; // edi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbp
  FONTOBJ *v11; // rax
  FONTOBJ *v12; // rbp
  ULONG AllGlyphHandles; // eax
  __int64 v14; // rdx
  UMPDOBJ *v16; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v16, ThreadCurrentObj);
  if ( v16 )
  {
    v11 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
    v12 = v11;
    if ( v11 )
    {
      if ( a2 )
      {
        AllGlyphHandles = FONTOBJ_cGetAllGlyphHandles(v11, 0LL);
        v6 = AllGlyphHandles;
        if ( AllGlyphHandles )
        {
          if ( AllGlyphHandles > 0x9C4000 )
            goto LABEL_13;
          v7 = (HGLYPH *)PALLOCMEM2(4 * AllGlyphHandles, 1886221639LL, 0);
        }
      }
      v8 = FONTOBJ_cGetAllGlyphHandles(v12, v7);
      if ( v8 && a2 )
      {
        if ( !v7 )
          goto LABEL_13;
        v8 &= -((unsigned int)bSafeCopyBits(a2, v7, 4 * v6) != 0);
      }
      if ( v7 )
        Win32FreePool(v7, v14);
    }
  }
LABEL_13:
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v16);
  return v8;
}
