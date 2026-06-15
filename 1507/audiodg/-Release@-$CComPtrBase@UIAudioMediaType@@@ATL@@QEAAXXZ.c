/*
 * XREFs of ?Release@?$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAXXZ @ 0x14000222C
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140007170 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140007C90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400088A0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

unsigned int __fastcall ATL::CComPtrBase<IAudioMediaType>::Release(CAudioMediaType **a1)
{
  CAudioMediaType *v1; // rbx
  unsigned int (__fastcall *v2)(CAudioMediaType *__hidden); // rdi
  unsigned int result; // eax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    v2 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v1 + 16LL);
    if ( v2 == CAudioMediaType::Release )
      return CAudioMediaType::Release(v1);
    else
      return v2(v1);
  }
  return result;
}
