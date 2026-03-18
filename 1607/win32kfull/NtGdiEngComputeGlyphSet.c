/*
 * XREFs of NtGdiEngComputeGlyphSet @ 0x1C02ACFD0
 * Callers:
 *     <none>
 * Callees:
 *     EngComputeGlyphSet @ 0x1C0017C40 (EngComputeGlyphSet.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0284BE0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C02AB8E4 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 */

__int64 __fastcall NtGdiEngComputeGlyphSet(INT nCodePage, __int64 nFirstChar, __int64 cChars, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  INT v7; // esi
  INT v8; // ebp
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // r14
  FD_GLYPHSET *v11; // rax
  struct _FD_GLYPHSET *v12; // rsi
  unsigned int cjThis; // ebp
  __int64 v14; // rax
  UMPDOBJ *v16; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v7 = cChars;
  v8 = nFirstChar;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             nFirstChar,
                                             cChars,
                                             a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v16, ThreadCurrentObj);
  if ( v16 )
  {
    v11 = EngComputeGlyphSet(nCodePage, v8, v7);
    v12 = v11;
    if ( v11 )
    {
      cjThis = v11->cjThis;
      if ( v11->cjThis )
      {
        v14 = (__int64)UMPDOBJ::_AllocUserMem(ThreadCurrentObj, cjThis, 0);
        v6 = v14;
        if ( v14 )
          v6 = -(__int64)((unsigned int)WriteFD_GLYPHSET((struct _FD_GLYPHSET *)v14, v12, cjThis) != 0) & v14;
      }
      EngFreeMem(v12);
    }
    v5 = v6;
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v16);
  return v5;
}
