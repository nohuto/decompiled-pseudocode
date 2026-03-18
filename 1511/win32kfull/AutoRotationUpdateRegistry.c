/*
 * XREFs of AutoRotationUpdateRegistry @ 0x1C009DFB0
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C009DC30 (xxxRemoteDisconnect.c)
 *     xxxSetAutoRotationState @ 0x1C01D295C (xxxSetAutoRotationState.c)
 * Callees:
 *     ?UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z @ 0x1C009DFF4 (-UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z.c)
 */

int AutoRotationUpdateRegistry()
{
  UpdateAutoRotationRegistrySetting(
    gAutoRotationInfo,
    L"LastAutoRequest",
    1u,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation\\NonPreserve");
  return UpdateAutoRotationRegistrySetting(
           dword_1C0323D64,
           L"LastOrientation",
           0,
           L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
}
