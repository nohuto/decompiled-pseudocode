/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEBG_N1AEBU_GUID@@@Z @ 0x14000AC40
 * Callers:
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x14000DA20 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000E950 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000F5C0 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@_N1AEBU_GUID@@@Z @ 0x14000AD50 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@_N1AEBU_GUID@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TrackSystemEffectBehavior(const unsigned __int16 *a1, bool a2, bool a3, const struct _GUID *a4)
{
  HRESULT Instance; // edi
  struct IMMDevice *v10; // [rsp+30h] [rbp-38h] BYREF
  LPVOID v11[6]; // [rsp+38h] [rbp-30h] BYREF

  v11[1] = (LPVOID)-2LL;
  v11[0] = 0LL;
  v10 = 0LL;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               v11);
  if ( Instance >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, struct IMMDevice **))(*(_QWORD *)v11[0]
                                                                                                + 40LL))(
                 v11[0],
                 a1,
                 &v10);
    if ( Instance >= 0 )
      Instance = TrackSystemEffectBehavior(v10, a2, a3, a4);
  }
  if ( v10 )
    ((void (__fastcall *)(struct IMMDevice *))v10->lpVtbl->Release)(v10);
  if ( v11[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11[0] + 16LL))(v11[0]);
  return (unsigned int)Instance;
}
