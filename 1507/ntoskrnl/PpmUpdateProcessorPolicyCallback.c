/*
 * XREFs of PpmUpdateProcessorPolicyCallback @ 0x140159AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmUpdateProcessorPolicyCallback(__int64 a1, _DWORD *a2)
{
  __int64 *v2; // rbp
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // r14
  void (__fastcall *v7)(_QWORD, _QWORD); // r8
  void (__fastcall *v8)(_QWORD, _QWORD); // r8
  void (__fastcall *v9)(_QWORD, _QWORD); // r8
  void (__fastcall *v10)(_QWORD, _QWORD); // r8
  void (__fastcall *v11)(_QWORD, _QWORD); // r8
  void (__fastcall *v12)(_QWORD, _QWORD); // r8

  v2 = PpmCurrentProfile;
  v4 = *(_QWORD *)(a1 + 24176);
  v5 = *(_QWORD *)(a1 + 24184);
  v6 = 174LL * dword_14032E84C;
  v7 = *(void (__fastcall **)(_QWORD, _QWORD))(v4 + 224);
  if ( v7 && (*a2 & 0x80u) != 0 )
    v7(*(_QWORD *)(v5 + 8), HIDWORD(PpmCurrentProfile[v6 + 10]));
  v8 = *(void (__fastcall **)(_QWORD, _QWORD))(v4 + 232);
  if ( v8 && (*a2 & 0x100) != 0 )
    v8(*(_QWORD *)(v5 + 8), LODWORD(v2[v6 + 11]));
  v9 = *(void (__fastcall **)(_QWORD, _QWORD))(v4 + 240);
  if ( v9 && (*a2 & 0x40) != 0 )
    v9(*(_QWORD *)(v5 + 8), LODWORD(v2[v6 + 12]));
  v10 = *(void (__fastcall **)(_QWORD, _QWORD))(v4 + 248);
  if ( v10 && (PpmAllowedActions & 0x400) != 0 )
    v10(*(_QWORD *)(v5 + 8), HIDWORD(v2[v6 + 12]));
  v11 = *(void (__fastcall **)(_QWORD, _QWORD))(v4 + 256);
  if ( v11 && (*a2 & 0x200) != 0 )
  {
    *(_BYTE *)(v4 + 332) = v2[v6 + 13];
    v11(*(_QWORD *)(v5 + 8), LOBYTE(v2[v6 + 13]));
  }
  v12 = *(void (__fastcall **)(_QWORD, _QWORD))(v4 + 216);
  if ( v12 && (*a2 & 0x800) != 0 )
    v12(*(_QWORD *)(v5 + 8), (unsigned int)PpmPerfTimeWindow);
  return 0LL;
}
