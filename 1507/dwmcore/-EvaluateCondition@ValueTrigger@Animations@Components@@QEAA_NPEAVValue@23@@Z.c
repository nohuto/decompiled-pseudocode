/*
 * XREFs of ?EvaluateCondition@ValueTrigger@Animations@Components@@QEAA_NPEAVValue@23@@Z @ 0x18015844C
 * Callers:
 *     ?EvaluateEvents@Animation@Animations@Components@@AEAAXW4Dwm__AnimationEventTriggerType@23@PEAX@Z @ 0x180154D88 (-EvaluateEvents@Animation@Animations@Components@@AEAAXW4Dwm__AnimationEventTriggerType@23@PEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetVector4@Value@Animations@Components@@QEBA?AVVector4@23@XZ @ 0x18009C19C (-GetVector4@Value@Animations@Components@@QEBA-AVVector4@23@XZ.c)
 */

bool __fastcall Components::Animations::ValueTrigger::EvaluateCondition(
        Components::Animations::ValueTrigger *this,
        struct Components::Animations::Value *a2)
{
  __int64 v2; // rdi
  char v4; // r15
  char v6; // r15
  int v7; // eax
  int v8; // eax
  int v9; // eax
  bool v10; // cf
  bool v12; // cc
  char v13; // al
  float v14; // [rsp+20h] [rbp-50h] BYREF
  float v15; // [rsp+24h] [rbp-4Ch]
  float v16; // [rsp+28h] [rbp-48h]
  float v17; // [rsp+2Ch] [rbp-44h]
  float v18; // [rsp+30h] [rbp-40h] BYREF
  float v19; // [rsp+34h] [rbp-3Ch]
  float v20; // [rsp+38h] [rbp-38h]
  float v21; // [rsp+3Ch] [rbp-34h]
  _QWORD v22[4]; // [rsp+40h] [rbp-30h] BYREF

  v2 = *((_QWORD *)this + 2);
  v4 = *((_BYTE *)this + 4);
  memset(v22, 0, sizeof(v22));
  v6 = v4 & 1;
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v2 + 16LL))(v2, v22);
  Components::Animations::Value::GetVector4((__int64)a2, (__int64)&v18);
  Components::Animations::Value::GetVector4((__int64)v22, (__int64)&v14);
  v7 = *((_DWORD *)this + 2);
  if ( !v7 )
  {
    if ( v18 < v14 || v19 < v15 || v20 < v16 || v21 < v17 )
      goto LABEL_10;
    if ( v18 > v14 || v19 > v15 || v20 > v16 )
      goto LABEL_34;
    v12 = v21 <= v17;
    goto LABEL_33;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 == 1 && v14 >= v18 && v15 >= v19 && v16 >= v20 )
      {
        v10 = v17 < v21;
        goto LABEL_9;
      }
LABEL_10:
      if ( (*((_BYTE *)this + 4) & 3) == 3 )
        *((_BYTE *)this + 4) &= ~1u;
      return (*((_BYTE *)this + 4) & 1) != v6;
    }
    if ( v14 < v18 || v15 < v19 || v16 < v20 || v17 < v21 )
      goto LABEL_10;
    if ( v14 > v18 || v15 > v19 || v16 > v20 )
      goto LABEL_34;
    v12 = v17 <= v21;
LABEL_33:
    if ( !v12 )
      goto LABEL_34;
    goto LABEL_10;
  }
  if ( v18 < v14 || v19 < v15 || v20 < v16 )
    goto LABEL_10;
  v10 = v21 < v17;
LABEL_9:
  if ( v10 )
    goto LABEL_10;
LABEL_34:
  v13 = *((_BYTE *)this + 4);
  if ( (v13 & 1) == 0 )
    *((_BYTE *)this + 4) = v13 | 1;
  return (*((_BYTE *)this + 4) & 1) != v6;
}
