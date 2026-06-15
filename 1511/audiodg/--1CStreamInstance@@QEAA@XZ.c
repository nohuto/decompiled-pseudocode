/*
 * XREFs of ??1CStreamInstance@@QEAA@XZ @ 0x1400032B0
 * Callers:
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140003DB0 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x1400265F4 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000C020 (--1CPipeInstance@@QEAA@XZ.c)
 *     ?Release@CVirtualProtectedOutput@@UEAAKXZ @ 0x140016830 (-Release@CVirtualProtectedOutput@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

void __fastcall CStreamInstance::~CStreamInstance(CStreamInstance *this)
{
  void *v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rdi
  void *v5; // rdi
  unsigned int (__fastcall *v6)(CVirtualProtectedOutput *__hidden); // rsi
  unsigned int (__fastcall *v7)(CVirtualProtectedOutput *__hidden); // rsi

  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    v6 = *(unsigned int (__fastcall **)(CVirtualProtectedOutput *__hidden))(*(_QWORD *)v3 + 16LL);
    if ( v6 == CVirtualProtectedOutput::Release )
      CVirtualProtectedOutput::Release(*((CVirtualProtectedOutput **)this + 4));
    else
      v6(*((CVirtualProtectedOutput **)this + 4));
  }
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    v7 = *(unsigned int (__fastcall **)(CVirtualProtectedOutput *__hidden))(*(_QWORD *)v4 + 16LL);
    if ( v7 == CVirtualProtectedOutput::Release )
      CVirtualProtectedOutput::Release(*((CVirtualProtectedOutput **)this + 3));
    else
      v7(*((CVirtualProtectedOutput **)this + 3));
  }
  v5 = *(void **)this;
  if ( *(_QWORD *)this )
  {
    CPipeInstance::~CPipeInstance(*(CPipeInstance **)this);
    operator delete(v5);
  }
  *(_QWORD *)this = 0LL;
}
