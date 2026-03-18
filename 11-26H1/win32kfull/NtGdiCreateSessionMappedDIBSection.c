/*
 * XREFs of NtGdiCreateSessionMappedDIBSection @ 0x14007BBA0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateDIBitmap @ 0x140015974 (GreCreateDIBitmap.c)
 *     GreGetBitmapBitsSize @ 0x14007BED4 (GreGetBitmapBitsSize.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x14007DFBC (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtGdiCreateSessionMappedDIBSection(
        Gre::Base *a1,
        __int64 a2,
        int a3,
        struct tagBITMAPINFO *a4,
        unsigned int a5,
        unsigned int a6,
        char a7,
        __int64 a8)
{
  __int64 DIBitmap; // rsi
  __int64 v12; // r12
  unsigned int CurrentProcessId; // ebx
  struct tagBITMAPINFO *v14; // rbx
  unsigned int BitmapBitsSize; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r13
  char v20; // al
  signed int v21; // r13d
  __int64 v22; // rax
  int v23; // eax
  ULONG v25; // ecx
  struct tagBITMAPINFO *v26; // [rsp+70h] [rbp-78h] BYREF
  __int64 v27; // [rsp+78h] [rbp-70h] BYREF
  __int64 v28; // [rsp+80h] [rbp-68h] BYREF
  __int64 v29; // [rsp+88h] [rbp-60h] BYREF
  __int64 v30; // [rsp+90h] [rbp-58h]
  __int64 v31; // [rsp+98h] [rbp-50h]
  __int64 v32; // [rsp+A0h] [rbp-48h]
  int v33; // [rsp+A8h] [rbp-40h]
  unsigned int v35; // [rsp+F8h] [rbp+10h]

  DIBitmap = 0LL;
  v26 = 0LL;
  v12 = 0LL;
  if ( !a2 || !a4 )
  {
    v25 = 87;
    goto LABEL_24;
  }
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (CurrentProcessId & 0xFFFFFFFC) != GrepGetWinLogonW32PID() )
  {
    v25 = 5;
LABEL_24:
    EngSetLastError(v25);
    return 0LL;
  }
  bCaptureBitmapInfo(a4, a5, a6, &v26);
  v14 = v26;
  if ( v26 )
  {
    BitmapBitsSize = GreGetBitmapBitsSize(v26);
    v19 = BitmapBitsSize;
    v35 = BitmapBitsSize;
    if ( BitmapBitsSize )
    {
      v26 = (struct tagBITMAPINFO *)(a3 & 0xFFFF0000);
      v28 = a2;
      LOBYTE(v18) = 1;
      Gre::SectionObj::SectionObj(&v27, &v28, 0LL, v18);
      v29 = 0LL;
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0LL;
      v33 = 6;
      if ( v27 )
      {
        v28 = (unsigned __int16)a3;
        v20 = Gre::MapViewOfSectionObj::Map(&v29, v27, 3LL, (unsigned __int16)a3 + v19, &v26);
        if ( v20 )
          v12 = v31;
        v21 = v20 == 0 ? 0xC0000001 : 0;
        v22 = v28;
      }
      else
      {
        v21 = -1073741823;
        EngSetLastError(0xC0000001);
        v22 = (unsigned __int16)a3;
      }
      if ( v21 < 0 )
        EngSetLastError(v21);
      else
        DIBitmap = GreCreateDIBitmap(a1, 2u, v22 + v12, (__int64)v14, a5, a6, v35, a2, a3, 0LL, a7 & 4 | 0xAu, a8);
      if ( DIBitmap )
      {
        v31 = 0LL;
        v29 = 0LL;
        v30 = 0LL;
        v32 = 0LL;
        v23 = 6;
        v33 = 6;
      }
      else
      {
        EngSetLastError(0x57u);
        v23 = v33;
      }
      if ( v23 != 6 )
        Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)&v29);
      Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v27);
    }
    FreeThreadBufferWithTag(v14, v16, v17);
  }
  return DIBitmap;
}
