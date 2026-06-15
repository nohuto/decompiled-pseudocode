/*
 * XREFs of ?GetOta@CStreamInstance@@QEAAJIPEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400295C4
 * Callers:
 *     ?GetStreamOta@CSystemAudioDeviceBase@@UEAAJ_KIPEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140029AF0 (-GetStreamOta@CSystemAudioDeviceBase@@UEAAJ_KIPEAPEAUIAudioVirtualProtectedOutput@@@Z.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_Ds @ 0x1400297DC (WPP_SF_Ds.c)
 */

__int64 __fastcall CStreamInstance::GetOta(CStreamInstance *this, int a2, struct IAudioVirtualProtectedOutput **a3)
{
  __int64 v3; // rdi
  int v4; // esi
  int v7; // edx
  struct IAudioVirtualProtectedOutput **v9; // r15
  struct IAudioVirtualProtectedOutput *v10; // rax
  bool v11; // sf
  __int64 (__fastcall *v12)(__int64, __int64, CStreamInstance *); // rbx
  __int64 v13; // [rsp+70h] [rbp+40h] BYREF
  __int64 v14; // [rsp+78h] [rbp+48h] BYREF

  *a3 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v13 = 0LL;
  v7 = a2 - 1;
  if ( !v7 )
  {
    if ( !*(_QWORD *)this )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 24LL))(
             *((_QWORD *)this + 3) + 16LL,
             1LL,
             &v13);
      if ( v4 < 0 )
        goto LABEL_27;
      v11 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 3) + 160LL))(
              *((_QWORD *)this + 3),
              *((_QWORD *)this + 2),
              &v14) < 0;
      v12 = *(__int64 (__fastcall **)(__int64, __int64, CStreamInstance *))(*(_QWORD *)v13 + 24LL);
      if ( v11 )
      {
        v4 = v12(v13, 0LL, this);
      }
      else
      {
        v4 = v12(v13, v14, this);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      if ( v4 < 0 )
        goto LABEL_27;
      v3 = v13;
    }
    v10 = *(struct IAudioVirtualProtectedOutput **)this;
    goto LABEL_22;
  }
  if ( v7 != 3 )
  {
    v4 = -2147467263;
    goto LABEL_4;
  }
  v9 = (struct IAudioVirtualProtectedOutput **)((char *)this + 8);
  if ( *((_QWORD *)this + 1) )
    goto LABEL_13;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 24LL))(
         *((_QWORD *)this + 3) + 16LL,
         4LL,
         &v13);
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioVirtualProtectedOutput **))(*(_QWORD *)v13 + 24LL))(
           v13,
           0LL,
           v9);
    if ( v4 >= 0 )
    {
      v3 = v13;
LABEL_13:
      v10 = *v9;
LABEL_22:
      *a3 = v10;
      goto LABEL_23;
    }
  }
LABEL_27:
  v3 = v13;
LABEL_23:
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v13 = 0LL;
  }
  if ( v4 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
LABEL_4:
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_Ds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      10,
      (unsigned int)&WPP_1c42d94b6452ae97e1ff53761700dc86_Traceguids,
      v4,
      (__int64)"CStreamInstance::GetOta()");
  }
  return (unsigned int)v4;
}
