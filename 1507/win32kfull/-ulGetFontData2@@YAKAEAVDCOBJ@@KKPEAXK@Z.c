/*
 * XREFs of ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C002F7F8
 * Callers:
 *     ulGetFontData @ 0x1C00320E8 (ulGetFontData.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?QueryTrueTypeTable@PDEVOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C0030ED0 (-QueryTrueTypeTable@PDEVOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 */

__int64 __fastcall ulGetFontData2(struct DCOBJ *a1, unsigned int a2, int a3, unsigned __int8 *a4, unsigned int a5)
{
  int v8; // eax
  struct _FD_XFORM *v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdx
  unsigned int TrueTypeTable; // ebx
  struct _FD_XFORM *v14; // [rsp+50h] [rbp-18h] BYREF
  __int64 v15; // [rsp+58h] [rbp-10h] BYREF

  v8 = RFONTOBJ::bInit(&v14, a1, 0, 2u);
  v9 = v14;
  if ( v8 )
    GreAcquireSemaphore(*(_QWORD *)&v14[33].eXX);
  if ( !v9 )
    goto LABEL_8;
  v10 = *(__int64 **)&v9[7].eXX;
  if ( !v10 || (v11 = *v10) == 0 )
  {
    EngSetLastError(6u);
LABEL_8:
    TrueTypeTable = -1;
    goto LABEL_7;
  }
  v15 = *(_QWORD *)&v9[5].eXX;
  TrueTypeTable = PDEVOBJ::QueryTrueTypeTable(
                    (PDEVOBJ *)&v15,
                    *(_QWORD *)(v11 + 80),
                    *((_DWORD *)v10 + 2),
                    a2,
                    a3,
                    a5,
                    a4,
                    0LL,
                    0LL);
LABEL_7:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
  return TrueTypeTable;
}
