/*
 * XREFs of NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1402334E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1400D7FD8 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1400D9968 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     FONTOBJ_cGetAllGlyphHandles @ 0x1402335F0 (FONTOBJ_cGetAllGlyphHandles.c)
 */

__int64 __fastcall NtGdiFONTOBJ_cGetAllGlyphHandles(__int64 a1, void *a2)
{
  ULONG v4; // esi
  HGLYPH *v5; // rbx
  ULONG v6; // edi
  struct _GRETHREAD *CurrentThread; // rax
  FONTOBJ *v8; // rax
  FONTOBJ *v9; // r14
  ULONG AllGlyphHandles; // eax
  __int64 v12; // r8
  UMPDOBJ *v13[4]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+40h] [rbp-48h]

  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v13, CurrentThread);
  if ( v14 )
  {
    v8 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(v14, a1);
    v9 = v8;
    if ( v8 )
    {
      if ( a2 )
      {
        AllGlyphHandles = FONTOBJ_cGetAllGlyphHandles(v8, 0LL);
        v4 = AllGlyphHandles;
        if ( AllGlyphHandles )
        {
          if ( AllGlyphHandles > 0x9C4000 )
            goto LABEL_7;
          v5 = (HGLYPH *)PALLOCNOZ(4 * AllGlyphHandles, 1886221639LL, v12);
        }
      }
      v6 = FONTOBJ_cGetAllGlyphHandles(v9, v5);
      if ( v6 && a2 )
      {
        if ( !v5 )
          goto LABEL_7;
        if ( !(unsigned int)bSafeCopyBits(a2, v5, 4 * v4) )
          v6 = 0;
      }
      else if ( !v5 )
      {
        goto LABEL_7;
      }
      Win32FreePool(v5);
    }
  }
LABEL_7:
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v13);
  return v6;
}
