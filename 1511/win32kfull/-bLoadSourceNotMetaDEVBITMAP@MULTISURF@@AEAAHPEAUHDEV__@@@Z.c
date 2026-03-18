/*
 * XREFs of ?bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z @ 0x1C02994BC
 * Callers:
 *     ?bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z @ 0x1C0299404 (-bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C029946C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 * Callees:
 *     ?bCreateDIB@MULTISURF@@AEAAHXZ @ 0x1C0299014 (-bCreateDIB@MULTISURF@@AEAAHXZ.c)
 */

__int64 __fastcall MULTISURF::bLoadSourceNotMetaDEVBITMAP(MULTISURF *this, HDEV a2)
{
  int v2; // eax
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  HDEV v8; // rcx
  struct _RECTL *v9; // r8
  struct _SURFOBJ *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  HDEV v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 6);
  if ( (v2 & 2) == 0 )
  {
    v7 = *(_QWORD *)this;
    v8 = *(HDEV *)(*(_QWORD *)this + 48LL);
    if ( v8 == a2 )
    {
      if ( (v2 & 1) != 0 )
      {
        v12 = *((_QWORD *)this + 4);
        *((_DWORD *)this + 6) = v2 & 0xFFFFFFFE;
        *(_QWORD *)(v7 + 40) = v12;
        *(_QWORD *)(*(_QWORD *)this + 24LL) = *((_QWORD *)this + 5);
        *(_DWORD *)(*(_QWORD *)this + 112LL) = *((_DWORD *)this + 12);
      }
    }
    else if ( (v2 & 1) == 0 )
    {
      if ( (v2 & 4) == 0 )
      {
        v9 = (struct _RECTL *)*((_QWORD *)this + 13);
        v10 = (struct _SURFOBJ *)*((_QWORD *)this + 12);
        v13 = v8;
        PDEVOBJ::vSync((PDEVOBJ *)&v13, v10, v9, 0);
        *((_DWORD *)this + 6) |= 4u;
      }
      v11 = *(_QWORD *)this;
      *((_DWORD *)this + 6) |= 1u;
      *(_QWORD *)(v11 + 40) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 112LL) = 0;
    }
    return 1LL;
  }
  if ( *(HDEV *)(*(_QWORD *)this + 48LL) == a2 )
  {
    *((_QWORD *)this + 12) = *(_QWORD *)this + 24LL;
    *((_QWORD *)this + 13) = (char *)this + 8;
    return 1LL;
  }
  v4 = 0LL;
  if ( *((_QWORD *)this + 7) || (result = MULTISURF::bCreateDIB(this), (_DWORD)result) )
  {
    v6 = *((_QWORD *)this + 7);
    if ( v6 )
      v4 = v6 + 24;
    *((_QWORD *)this + 12) = v4;
    *((_QWORD *)this + 13) = (char *)this + 72;
    return 1LL;
  }
  return result;
}
