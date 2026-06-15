/*
 * XREFs of ?Release@?$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAXXZ @ 0x140013198
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000E950 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000F5C0 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400103E0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComPtrBase<IAudioMediaType>::Release(CAudioMediaType **a1)
{
  CAudioMediaType *v1; // rbx
  __int64 (__fastcall *v2)(CAudioMediaType *); // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    v2 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v1 + 16LL);
    if ( v2 == CAudioMediaType::Release )
      return CAudioMediaType::Release(v1);
    else
      return v2(v1);
  }
  return result;
}
