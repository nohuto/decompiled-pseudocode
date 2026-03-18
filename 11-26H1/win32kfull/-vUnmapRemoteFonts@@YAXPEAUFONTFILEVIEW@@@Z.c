/*
 * XREFs of ?vUnmapRemoteFonts@@YAXPEAUFONTFILEVIEW@@@Z @ 0x1400D3E7C
 * Callers:
 *     FreeFileView @ 0x1400D3C10 (FreeFileView.c)
 *     ?GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z @ 0x14021BB1C (-GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z.c)
 *     NtGdiAddRemoteFontToDC @ 0x14031C1A0 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     <none>
 */

void __fastcall vUnmapRemoteFonts(struct FONTFILEVIEW *a1)
{
  int v1; // eax
  int v3; // eax
  __int64 v4; // rcx
  void *v5; // rcx
  _QWORD v6[4]; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+40h] [rbp-18h]
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = *((_DWORD *)a1 + 25);
    if ( !v1 || (v3 = v1 - 1, (*((_DWORD *)a1 + 25) = v3) == 0) )
    {
      if ( *((_QWORD *)a1 + 4) )
      {
        v4 = *((_QWORD *)a1 + 13);
        if ( v4 )
        {
          v6[0] = *((_QWORD *)a1 + 9);
          v6[2] = v4;
          v6[1] = 0LL;
          v6[3] = 0LL;
          v7 = 5;
          Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v6);
          *((_QWORD *)a1 + 13) = 0LL;
        }
        v8 = *((_QWORD *)a1 + 4);
        Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v8);
        v5 = (void *)*((_QWORD *)a1 + 6);
        *((_QWORD *)a1 + 4) = 0LL;
        if ( v5 )
        {
          ZwClose(v5);
          *((_QWORD *)a1 + 6) = 0LL;
        }
      }
    }
  }
}
