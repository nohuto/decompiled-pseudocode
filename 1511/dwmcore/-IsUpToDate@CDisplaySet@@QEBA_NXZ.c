/*
 * XREFs of ?IsUpToDate@CDisplaySet@@QEBA_NXZ @ 0x1800700C0
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18006F0C8 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 * Callees:
 *     ?IsUpToDate@CDXGIEnumeration@@QEBA_NXZ @ 0x18006B81C (-IsUpToDate@CDXGIEnumeration@@QEBA_NXZ.c)
 *     ?HasDDAChanged@CDisplay@@QEBA_NXZ @ 0x1800704C4 (-HasDDAChanged@CDisplay@@QEBA_NXZ.c)
 */

char __fastcall CDisplaySet::IsUpToDate(CDisplaySet *this)
{
  bool v2; // r13
  bool v3; // r12
  char v4; // bl
  bool IsUpToDate; // r15
  char v6; // bp
  bool v7; // r14
  __int64 v8; // rdi

  v2 = GdiEntry13() == *((_DWORD *)this + 1);
  v3 = *((_DWORD *)this + 2) == dword_1801A3A14;
  v4 = 1;
  IsUpToDate = CDXGIEnumeration::IsUpToDate(*((CDXGIEnumeration **)this + 2));
  v6 = 1;
  v7 = *((_DWORD *)this + 3) == dword_1801A3A18;
  v8 = 0LL;
  if ( *((_DWORD *)this + 18) )
  {
    while ( !CDisplay::HasDDAChanged(*(CDisplay **)(*((_QWORD *)this + 6) + 8 * v8)) )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *((_DWORD *)this + 18) )
        goto LABEL_4;
    }
    v6 = 0;
  }
LABEL_4:
  if ( !v2 || !v3 || !IsUpToDate || !v7 || !v6 )
    return 0;
  return v4;
}
